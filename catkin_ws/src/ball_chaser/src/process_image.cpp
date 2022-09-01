#include "ros/ros.h"
#include "ball_chaser/DriveToTarget.h"
#include <sensor_msgs/Image.h>

// Define a global client that can request services
ros::ServiceClient client;

// This function calls the command_robot service to drive the robot in the specified direction
void drive_robot(float lin_x, float ang_z)
{
    // Request a service and pass the velocities to it to drive the robot
	ROS_INFO_STREAM("Driving the robot");
	
	ball_chaser::DriveToTarget srv;
	srv.request.linear_x = lin_x;
	srv.request.angular_z = ang_z;

	// Call the DriveToTarget service and pass the requested joint angles
    if (!client.call(srv))
        ROS_ERROR("Failed to call service DriveToTarget");
}

// This callback function continuously executes and reads the image data
void process_image_callback(const sensor_msgs::Image img)
{

    int white_pixel = 250;
    int white_pixel_found = false;
    int white_pixel_horizontal_position;

    //Divide image into left, right, and middle segments
    int left_middle_bound = int(img.width / 3);
    int right_middle_bound = left_middle_bound * 2;

    //Loop through each pixel in the image and check if there's a bright white one
	for(int pixel = 0; pixel < img.height*img.width; pixel += 8){
		ROS_INFO_STREAM(std::to_string(img.data[pixel]) << " | " << std::to_string(pixel));

		if (img.data[pixel] >= white_pixel ){
			white_pixel_found = true;
			white_pixel_horizontal_position = pixel % img.width;
			break;
		}
        }

	//drive left, straight, or right depending on position of detected pixel
	if(white_pixel_found){
            if(white_pixel_horizontal_position < left_middle_bound){
		//go left
		ROS_INFO_STREAM("COMMANDING LEFT");
		drive_robot(0.0, 0.5);
	    }
	    else if(white_pixel_horizontal_position < right_middle_bound){
		//go straight
		ROS_INFO_STREAM("COMMANDING STRAIGHT");
		drive_robot(0.5, 0.0);
	    }
	    else{
		//go right
		ROS_INFO_STREAM("COMMANDING RIGHT");
		drive_robot(0.0, -0.5);
	    }
        }
	else{
    	    //stop	
	     ROS_INFO_STREAM("COMMANDING STOP");
	     drive_robot(0.0, 0.0);
	}
	ROS_INFO_STREAM("Image processed, ball detected:" <<  white_pixel_found << std::endl);
}

int main(int argc, char** argv)
{
    // Initialize the process_image node and create a handle to it
    ros::init(argc, argv, "process_image");
    ros::NodeHandle n;

    // Define a client service capable of requesting services from command_robot
    client = n.serviceClient<ball_chaser::DriveToTarget>("/ball_chaser/command_robot");

    // Subscribe to /camera/rgb/image_raw topic to read the image data inside the process_image_callback function
    ros::Subscriber sub1 = n.subscribe("/camera/rgb/image_raw", 10, process_image_callback);

    // Handle ROS communication events
    ros::spin();

    return 0;
}

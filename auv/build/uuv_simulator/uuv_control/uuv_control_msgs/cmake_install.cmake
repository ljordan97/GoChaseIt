# Install script for directory: /home/robond/workspace/auv/src/uuv_simulator/uuv_control/uuv_control_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/robond/workspace/auv/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_msgs/msg" TYPE FILE FILES
    "/home/robond/workspace/auv/src/uuv_simulator/uuv_control/uuv_control_msgs/msg/Trajectory.msg"
    "/home/robond/workspace/auv/src/uuv_simulator/uuv_control/uuv_control_msgs/msg/TrajectoryPoint.msg"
    "/home/robond/workspace/auv/src/uuv_simulator/uuv_control/uuv_control_msgs/msg/Waypoint.msg"
    "/home/robond/workspace/auv/src/uuv_simulator/uuv_control/uuv_control_msgs/msg/WaypointSet.msg"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_msgs/srv" TYPE FILE FILES
    "/home/robond/workspace/auv/src/uuv_simulator/uuv_control/uuv_control_msgs/srv/AddWaypoint.srv"
    "/home/robond/workspace/auv/src/uuv_simulator/uuv_control/uuv_control_msgs/srv/ClearWaypoints.srv"
    "/home/robond/workspace/auv/src/uuv_simulator/uuv_control/uuv_control_msgs/srv/InitCircularTrajectory.srv"
    "/home/robond/workspace/auv/src/uuv_simulator/uuv_control/uuv_control_msgs/srv/InitHelicalTrajectory.srv"
    "/home/robond/workspace/auv/src/uuv_simulator/uuv_control/uuv_control_msgs/srv/InitWaypointsFromFile.srv"
    "/home/robond/workspace/auv/src/uuv_simulator/uuv_control/uuv_control_msgs/srv/GetWaypoints.srv"
    "/home/robond/workspace/auv/src/uuv_simulator/uuv_control/uuv_control_msgs/srv/GoTo.srv"
    "/home/robond/workspace/auv/src/uuv_simulator/uuv_control/uuv_control_msgs/srv/GoToIncremental.srv"
    "/home/robond/workspace/auv/src/uuv_simulator/uuv_control/uuv_control_msgs/srv/Hold.srv"
    "/home/robond/workspace/auv/src/uuv_simulator/uuv_control/uuv_control_msgs/srv/IsRunningTrajectory.srv"
    "/home/robond/workspace/auv/src/uuv_simulator/uuv_control/uuv_control_msgs/srv/InitWaypointSet.srv"
    "/home/robond/workspace/auv/src/uuv_simulator/uuv_control/uuv_control_msgs/srv/InitRectTrajectory.srv"
    "/home/robond/workspace/auv/src/uuv_simulator/uuv_control/uuv_control_msgs/srv/StartTrajectory.srv"
    "/home/robond/workspace/auv/src/uuv_simulator/uuv_control/uuv_control_msgs/srv/SwitchToAutomatic.srv"
    "/home/robond/workspace/auv/src/uuv_simulator/uuv_control/uuv_control_msgs/srv/SwitchToManual.srv"
    "/home/robond/workspace/auv/src/uuv_simulator/uuv_control/uuv_control_msgs/srv/SetPIDParams.srv"
    "/home/robond/workspace/auv/src/uuv_simulator/uuv_control/uuv_control_msgs/srv/GetPIDParams.srv"
    "/home/robond/workspace/auv/src/uuv_simulator/uuv_control/uuv_control_msgs/srv/SetSMControllerParams.srv"
    "/home/robond/workspace/auv/src/uuv_simulator/uuv_control/uuv_control_msgs/srv/GetSMControllerParams.srv"
    "/home/robond/workspace/auv/src/uuv_simulator/uuv_control/uuv_control_msgs/srv/SetMBSMControllerParams.srv"
    "/home/robond/workspace/auv/src/uuv_simulator/uuv_control/uuv_control_msgs/srv/GetMBSMControllerParams.srv"
    "/home/robond/workspace/auv/src/uuv_simulator/uuv_control/uuv_control_msgs/srv/ResetController.srv"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_msgs/cmake" TYPE FILE FILES "/home/robond/workspace/auv/build/uuv_simulator/uuv_control/uuv_control_msgs/catkin_generated/installspace/uuv_control_msgs-msg-paths.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/robond/workspace/auv/devel/include/uuv_control_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/robond/workspace/auv/devel/share/roseus/ros/uuv_control_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/robond/workspace/auv/devel/share/common-lisp/ros/uuv_control_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/robond/workspace/auv/devel/share/gennodejs/ros/uuv_control_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python" -m compileall "/home/robond/workspace/auv/devel/lib/python2.7/dist-packages/uuv_control_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/robond/workspace/auv/devel/lib/python2.7/dist-packages/uuv_control_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/robond/workspace/auv/build/uuv_simulator/uuv_control/uuv_control_msgs/catkin_generated/installspace/uuv_control_msgs.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_msgs/cmake" TYPE FILE FILES "/home/robond/workspace/auv/build/uuv_simulator/uuv_control/uuv_control_msgs/catkin_generated/installspace/uuv_control_msgs-msg-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_msgs/cmake" TYPE FILE FILES
    "/home/robond/workspace/auv/build/uuv_simulator/uuv_control/uuv_control_msgs/catkin_generated/installspace/uuv_control_msgsConfig.cmake"
    "/home/robond/workspace/auv/build/uuv_simulator/uuv_control/uuv_control_msgs/catkin_generated/installspace/uuv_control_msgsConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_msgs" TYPE FILE FILES "/home/robond/workspace/auv/src/uuv_simulator/uuv_control/uuv_control_msgs/package.xml")
endif()


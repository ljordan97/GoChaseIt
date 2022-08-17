## *********************************************************
## 
## File autogenerated for the uuv_control package 
## by the dynamic_reconfigure package.
## Please do not edit.
## 
## ********************************************************/

from dynamic_reconfigure.encoding import extract_params

inf = float('inf')

config_description = {'upper': 'DEFAULT', 'lower': 'groups', 'srcline': 246, 'name': 'Default', 'parent': 0, 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'cstate': 'true', 'parentname': 'Default', 'class': 'DEFAULT', 'field': 'default', 'state': True, 'parentclass': '', 'groups': [], 'parameters': [{'srcline': 293, 'description': 'p component of pid for linear vel.', 'max': 100.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'linear_p', 'edit_method': '', 'default': 1.0, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 293, 'description': 'i component of pid for linear vel.', 'max': 100.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'linear_i', 'edit_method': '', 'default': 0.0, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 293, 'description': 'd component of pid for linear vel.', 'max': 100.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'linear_d', 'edit_method': '', 'default': 0.0, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 293, 'description': 'saturation of pid for linear vel.', 'max': 100.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'linear_sat', 'edit_method': '', 'default': 10.0, 'level': 1, 'min': 0.0, 'type': 'double'}, {'srcline': 293, 'description': 'p component of pid for angular vel.', 'max': 100.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'angular_p', 'edit_method': '', 'default': 1.0, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 293, 'description': 'i component of pid for angular vel.', 'max': 100.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'angular_i', 'edit_method': '', 'default': 0.0, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 293, 'description': 'd component of pid for angular vel.', 'max': 100.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'angular_d', 'edit_method': '', 'default': 0.0, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 293, 'description': 'saturation of pid for angular vel.', 'max': 100.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'angular_sat', 'edit_method': '', 'default': 3.0, 'level': 1, 'min': 0.0, 'type': 'double'}, {'srcline': 293, 'description': 'Is odometry velocity supplied in world frame? (gazebo)', 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'odom_vel_in_world', 'edit_method': '', 'default': True, 'level': 0, 'min': False, 'type': 'bool'}], 'type': '', 'id': 0}

min = {}
max = {}
defaults = {}
level = {}
type = {}
all_level = 0

#def extract_params(config):
#    params = []
#    params.extend(config['parameters'])    
#    for group in config['groups']:
#        params.extend(extract_params(group))
#    return params

for param in extract_params(config_description):
    min[param['name']] = param['min']
    max[param['name']] = param['max']
    defaults[param['name']] = param['default']
    level[param['name']] = param['level']
    type[param['name']] = param['type']
    all_level = all_level | param['level']

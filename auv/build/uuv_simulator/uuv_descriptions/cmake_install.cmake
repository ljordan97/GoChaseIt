# Install script for directory: /home/robond/workspace/auv/src/uuv_simulator/uuv_descriptions

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/robond/workspace/auv/build/uuv_simulator/uuv_descriptions/catkin_generated/installspace/uuv_descriptions.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_descriptions/cmake" TYPE FILE FILES
    "/home/robond/workspace/auv/build/uuv_simulator/uuv_descriptions/catkin_generated/installspace/uuv_descriptionsConfig.cmake"
    "/home/robond/workspace/auv/build/uuv_simulator/uuv_descriptions/catkin_generated/installspace/uuv_descriptionsConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_descriptions" TYPE FILE FILES "/home/robond/workspace/auv/src/uuv_simulator/uuv_descriptions/package.xml")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/uuv_descriptions" TYPE PROGRAM FILES "/home/robond/workspace/auv/build/uuv_simulator/uuv_descriptions/catkin_generated/installspace/spawn_model")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_descriptions" TYPE DIRECTORY FILES
    "/home/robond/workspace/auv/src/uuv_simulator/uuv_descriptions/launch"
    "/home/robond/workspace/auv/src/uuv_simulator/uuv_descriptions/meshes"
    "/home/robond/workspace/auv/src/uuv_simulator/uuv_descriptions/robots"
    "/home/robond/workspace/auv/src/uuv_simulator/uuv_descriptions/urdf"
    REGEX "/[^/]*\\~$" EXCLUDE)
endif()


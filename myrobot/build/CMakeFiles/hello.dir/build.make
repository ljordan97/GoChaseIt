# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/robond/workspace/myrobot

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/robond/workspace/myrobot/build

# Include any dependencies generated for this target.
include CMakeFiles/hello.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hello.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hello.dir/flags.make

CMakeFiles/hello.dir/script/hello.cpp.o: CMakeFiles/hello.dir/flags.make
CMakeFiles/hello.dir/script/hello.cpp.o: ../script/hello.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/robond/workspace/myrobot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hello.dir/script/hello.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hello.dir/script/hello.cpp.o -c /home/robond/workspace/myrobot/script/hello.cpp

CMakeFiles/hello.dir/script/hello.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hello.dir/script/hello.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/robond/workspace/myrobot/script/hello.cpp > CMakeFiles/hello.dir/script/hello.cpp.i

CMakeFiles/hello.dir/script/hello.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hello.dir/script/hello.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/robond/workspace/myrobot/script/hello.cpp -o CMakeFiles/hello.dir/script/hello.cpp.s

CMakeFiles/hello.dir/script/hello.cpp.o.requires:

.PHONY : CMakeFiles/hello.dir/script/hello.cpp.o.requires

CMakeFiles/hello.dir/script/hello.cpp.o.provides: CMakeFiles/hello.dir/script/hello.cpp.o.requires
	$(MAKE) -f CMakeFiles/hello.dir/build.make CMakeFiles/hello.dir/script/hello.cpp.o.provides.build
.PHONY : CMakeFiles/hello.dir/script/hello.cpp.o.provides

CMakeFiles/hello.dir/script/hello.cpp.o.provides.build: CMakeFiles/hello.dir/script/hello.cpp.o


# Object files for target hello
hello_OBJECTS = \
"CMakeFiles/hello.dir/script/hello.cpp.o"

# External object files for target hello
hello_EXTERNAL_OBJECTS =

libhello.so: CMakeFiles/hello.dir/script/hello.cpp.o
libhello.so: CMakeFiles/hello.dir/build.make
libhello.so: /usr/lib/x86_64-linux-gnu/libgazebo.so
libhello.so: /usr/lib/x86_64-linux-gnu/libgazebo_client.so
libhello.so: /usr/lib/x86_64-linux-gnu/libgazebo_gui.so
libhello.so: /usr/lib/x86_64-linux-gnu/libgazebo_sensors.so
libhello.so: /usr/lib/x86_64-linux-gnu/libgazebo_rendering.so
libhello.so: /usr/lib/x86_64-linux-gnu/libgazebo_physics.so
libhello.so: /usr/lib/x86_64-linux-gnu/libgazebo_ode.so
libhello.so: /usr/lib/x86_64-linux-gnu/libgazebo_transport.so
libhello.so: /usr/lib/x86_64-linux-gnu/libgazebo_msgs.so
libhello.so: /usr/lib/x86_64-linux-gnu/libgazebo_util.so
libhello.so: /usr/lib/x86_64-linux-gnu/libgazebo_common.so
libhello.so: /usr/lib/x86_64-linux-gnu/libgazebo_gimpact.so
libhello.so: /usr/lib/x86_64-linux-gnu/libgazebo_opcode.so
libhello.so: /usr/lib/x86_64-linux-gnu/libgazebo_opende_ou.so
libhello.so: /usr/lib/x86_64-linux-gnu/libgazebo_math.so
libhello.so: /usr/lib/x86_64-linux-gnu/libgazebo_ccd.so
libhello.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
libhello.so: /usr/lib/x86_64-linux-gnu/libboost_signals.so
libhello.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
libhello.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
libhello.so: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
libhello.so: /usr/lib/x86_64-linux-gnu/libboost_regex.so
libhello.so: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so
libhello.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
libhello.so: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
libhello.so: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
libhello.so: /usr/lib/x86_64-linux-gnu/libpthread.so
libhello.so: /usr/lib/x86_64-linux-gnu/libprotobuf.so
libhello.so: /usr/lib/x86_64-linux-gnu/libsdformat.so
libhello.so: /usr/lib/x86_64-linux-gnu/libignition-math2.so
libhello.so: /usr/lib/x86_64-linux-gnu/libOgreMain.so
libhello.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
libhello.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
libhello.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
libhello.so: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
libhello.so: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
libhello.so: /usr/lib/x86_64-linux-gnu/libpthread.so
libhello.so: /usr/lib/x86_64-linux-gnu/libOgreTerrain.so
libhello.so: /usr/lib/x86_64-linux-gnu/libOgrePaging.so
libhello.so: /usr/lib/x86_64-linux-gnu/libignition-math2.so
libhello.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
libhello.so: /usr/lib/x86_64-linux-gnu/libboost_signals.so
libhello.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
libhello.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
libhello.so: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
libhello.so: /usr/lib/x86_64-linux-gnu/libboost_regex.so
libhello.so: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so
libhello.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
libhello.so: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
libhello.so: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
libhello.so: /usr/lib/x86_64-linux-gnu/libpthread.so
libhello.so: /usr/lib/x86_64-linux-gnu/libprotobuf.so
libhello.so: /usr/lib/x86_64-linux-gnu/libsdformat.so
libhello.so: /usr/lib/x86_64-linux-gnu/libOgreMain.so
libhello.so: /usr/lib/x86_64-linux-gnu/libOgreTerrain.so
libhello.so: /usr/lib/x86_64-linux-gnu/libOgrePaging.so
libhello.so: CMakeFiles/hello.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/robond/workspace/myrobot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libhello.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hello.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hello.dir/build: libhello.so

.PHONY : CMakeFiles/hello.dir/build

CMakeFiles/hello.dir/requires: CMakeFiles/hello.dir/script/hello.cpp.o.requires

.PHONY : CMakeFiles/hello.dir/requires

CMakeFiles/hello.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hello.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hello.dir/clean

CMakeFiles/hello.dir/depend:
	cd /home/robond/workspace/myrobot/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/robond/workspace/myrobot /home/robond/workspace/myrobot /home/robond/workspace/myrobot/build /home/robond/workspace/myrobot/build /home/robond/workspace/myrobot/build/CMakeFiles/hello.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hello.dir/depend


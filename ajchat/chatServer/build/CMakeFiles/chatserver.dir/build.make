# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/an/dev/my/chat/ajchat/chatServer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/an/dev/my/chat/ajchat/chatServer/build

# Include any dependencies generated for this target.
include CMakeFiles/chatserver.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/chatserver.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/chatserver.dir/flags.make

CMakeFiles/chatserver.dir/main.o: CMakeFiles/chatserver.dir/flags.make
CMakeFiles/chatserver.dir/main.o: ../main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/an/dev/my/chat/ajchat/chatServer/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/chatserver.dir/main.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/chatserver.dir/main.o -c /home/an/dev/my/chat/ajchat/chatServer/main.cpp

CMakeFiles/chatserver.dir/main.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chatserver.dir/main.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/an/dev/my/chat/ajchat/chatServer/main.cpp > CMakeFiles/chatserver.dir/main.i

CMakeFiles/chatserver.dir/main.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chatserver.dir/main.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/an/dev/my/chat/ajchat/chatServer/main.cpp -o CMakeFiles/chatserver.dir/main.s

CMakeFiles/chatserver.dir/main.o.requires:
.PHONY : CMakeFiles/chatserver.dir/main.o.requires

CMakeFiles/chatserver.dir/main.o.provides: CMakeFiles/chatserver.dir/main.o.requires
	$(MAKE) -f CMakeFiles/chatserver.dir/build.make CMakeFiles/chatserver.dir/main.o.provides.build
.PHONY : CMakeFiles/chatserver.dir/main.o.provides

CMakeFiles/chatserver.dir/main.o.provides.build: CMakeFiles/chatserver.dir/main.o

# Object files for target chatserver
chatserver_OBJECTS = \
"CMakeFiles/chatserver.dir/main.o"

# External object files for target chatserver
chatserver_EXTERNAL_OBJECTS =

chatserver: CMakeFiles/chatserver.dir/main.o
chatserver: CMakeFiles/chatserver.dir/build.make
chatserver: CMakeFiles/chatserver.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable chatserver"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/chatserver.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/chatserver.dir/build: chatserver
.PHONY : CMakeFiles/chatserver.dir/build

CMakeFiles/chatserver.dir/requires: CMakeFiles/chatserver.dir/main.o.requires
.PHONY : CMakeFiles/chatserver.dir/requires

CMakeFiles/chatserver.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/chatserver.dir/cmake_clean.cmake
.PHONY : CMakeFiles/chatserver.dir/clean

CMakeFiles/chatserver.dir/depend:
	cd /home/an/dev/my/chat/ajchat/chatServer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/an/dev/my/chat/ajchat/chatServer /home/an/dev/my/chat/ajchat/chatServer /home/an/dev/my/chat/ajchat/chatServer/build /home/an/dev/my/chat/ajchat/chatServer/build /home/an/dev/my/chat/ajchat/chatServer/build/CMakeFiles/chatserver.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/chatserver.dir/depend


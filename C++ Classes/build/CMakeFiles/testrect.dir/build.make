# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = "/workspaces/User-Interfaces/C++ Classes"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/workspaces/User-Interfaces/C++ Classes/build"

# Include any dependencies generated for this target.
include CMakeFiles/testrect.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/testrect.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testrect.dir/flags.make

CMakeFiles/testrect.dir/testrect.cpp.o: CMakeFiles/testrect.dir/flags.make
CMakeFiles/testrect.dir/testrect.cpp.o: ../testrect.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/workspaces/User-Interfaces/C++ Classes/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/testrect.dir/testrect.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/testrect.dir/testrect.cpp.o -c "/workspaces/User-Interfaces/C++ Classes/testrect.cpp"

CMakeFiles/testrect.dir/testrect.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testrect.dir/testrect.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/workspaces/User-Interfaces/C++ Classes/testrect.cpp" > CMakeFiles/testrect.dir/testrect.cpp.i

CMakeFiles/testrect.dir/testrect.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testrect.dir/testrect.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/workspaces/User-Interfaces/C++ Classes/testrect.cpp" -o CMakeFiles/testrect.dir/testrect.cpp.s

CMakeFiles/testrect.dir/rect.cpp.o: CMakeFiles/testrect.dir/flags.make
CMakeFiles/testrect.dir/rect.cpp.o: ../rect.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/workspaces/User-Interfaces/C++ Classes/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/testrect.dir/rect.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/testrect.dir/rect.cpp.o -c "/workspaces/User-Interfaces/C++ Classes/rect.cpp"

CMakeFiles/testrect.dir/rect.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testrect.dir/rect.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/workspaces/User-Interfaces/C++ Classes/rect.cpp" > CMakeFiles/testrect.dir/rect.cpp.i

CMakeFiles/testrect.dir/rect.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testrect.dir/rect.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/workspaces/User-Interfaces/C++ Classes/rect.cpp" -o CMakeFiles/testrect.dir/rect.cpp.s

# Object files for target testrect
testrect_OBJECTS = \
"CMakeFiles/testrect.dir/testrect.cpp.o" \
"CMakeFiles/testrect.dir/rect.cpp.o"

# External object files for target testrect
testrect_EXTERNAL_OBJECTS =

testrect: CMakeFiles/testrect.dir/testrect.cpp.o
testrect: CMakeFiles/testrect.dir/rect.cpp.o
testrect: CMakeFiles/testrect.dir/build.make
testrect: CMakeFiles/testrect.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/workspaces/User-Interfaces/C++ Classes/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable testrect"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testrect.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testrect.dir/build: testrect

.PHONY : CMakeFiles/testrect.dir/build

CMakeFiles/testrect.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/testrect.dir/cmake_clean.cmake
.PHONY : CMakeFiles/testrect.dir/clean

CMakeFiles/testrect.dir/depend:
	cd "/workspaces/User-Interfaces/C++ Classes/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/workspaces/User-Interfaces/C++ Classes" "/workspaces/User-Interfaces/C++ Classes" "/workspaces/User-Interfaces/C++ Classes/build" "/workspaces/User-Interfaces/C++ Classes/build" "/workspaces/User-Interfaces/C++ Classes/build/CMakeFiles/testrect.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/testrect.dir/depend


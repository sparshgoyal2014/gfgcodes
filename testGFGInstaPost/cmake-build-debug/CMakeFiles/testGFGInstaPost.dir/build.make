# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\GeeksForGeeksDataStructures\testGFGInstaPost

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\GeeksForGeeksDataStructures\testGFGInstaPost\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/testGFGInstaPost.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/testGFGInstaPost.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testGFGInstaPost.dir/flags.make

CMakeFiles/testGFGInstaPost.dir/main.cpp.obj: CMakeFiles/testGFGInstaPost.dir/flags.make
CMakeFiles/testGFGInstaPost.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\GeeksForGeeksDataStructures\testGFGInstaPost\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/testGFGInstaPost.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\testGFGInstaPost.dir\main.cpp.obj -c F:\GeeksForGeeksDataStructures\testGFGInstaPost\main.cpp

CMakeFiles/testGFGInstaPost.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testGFGInstaPost.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\GeeksForGeeksDataStructures\testGFGInstaPost\main.cpp > CMakeFiles\testGFGInstaPost.dir\main.cpp.i

CMakeFiles/testGFGInstaPost.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testGFGInstaPost.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\GeeksForGeeksDataStructures\testGFGInstaPost\main.cpp -o CMakeFiles\testGFGInstaPost.dir\main.cpp.s

# Object files for target testGFGInstaPost
testGFGInstaPost_OBJECTS = \
"CMakeFiles/testGFGInstaPost.dir/main.cpp.obj"

# External object files for target testGFGInstaPost
testGFGInstaPost_EXTERNAL_OBJECTS =

testGFGInstaPost.exe: CMakeFiles/testGFGInstaPost.dir/main.cpp.obj
testGFGInstaPost.exe: CMakeFiles/testGFGInstaPost.dir/build.make
testGFGInstaPost.exe: CMakeFiles/testGFGInstaPost.dir/linklibs.rsp
testGFGInstaPost.exe: CMakeFiles/testGFGInstaPost.dir/objects1.rsp
testGFGInstaPost.exe: CMakeFiles/testGFGInstaPost.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\GeeksForGeeksDataStructures\testGFGInstaPost\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable testGFGInstaPost.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\testGFGInstaPost.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testGFGInstaPost.dir/build: testGFGInstaPost.exe

.PHONY : CMakeFiles/testGFGInstaPost.dir/build

CMakeFiles/testGFGInstaPost.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\testGFGInstaPost.dir\cmake_clean.cmake
.PHONY : CMakeFiles/testGFGInstaPost.dir/clean

CMakeFiles/testGFGInstaPost.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\GeeksForGeeksDataStructures\testGFGInstaPost F:\GeeksForGeeksDataStructures\testGFGInstaPost F:\GeeksForGeeksDataStructures\testGFGInstaPost\cmake-build-debug F:\GeeksForGeeksDataStructures\testGFGInstaPost\cmake-build-debug F:\GeeksForGeeksDataStructures\testGFGInstaPost\cmake-build-debug\CMakeFiles\testGFGInstaPost.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/testGFGInstaPost.dir/depend


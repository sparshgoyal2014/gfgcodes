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
CMAKE_SOURCE_DIR = F:\GeeksForGeeksDataStructures\testLogFunction

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\GeeksForGeeksDataStructures\testLogFunction\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/testLogFunction.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/testLogFunction.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testLogFunction.dir/flags.make

CMakeFiles/testLogFunction.dir/main.cpp.obj: CMakeFiles/testLogFunction.dir/flags.make
CMakeFiles/testLogFunction.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\GeeksForGeeksDataStructures\testLogFunction\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/testLogFunction.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\testLogFunction.dir\main.cpp.obj -c F:\GeeksForGeeksDataStructures\testLogFunction\main.cpp

CMakeFiles/testLogFunction.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testLogFunction.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\GeeksForGeeksDataStructures\testLogFunction\main.cpp > CMakeFiles\testLogFunction.dir\main.cpp.i

CMakeFiles/testLogFunction.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testLogFunction.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\GeeksForGeeksDataStructures\testLogFunction\main.cpp -o CMakeFiles\testLogFunction.dir\main.cpp.s

# Object files for target testLogFunction
testLogFunction_OBJECTS = \
"CMakeFiles/testLogFunction.dir/main.cpp.obj"

# External object files for target testLogFunction
testLogFunction_EXTERNAL_OBJECTS =

testLogFunction.exe: CMakeFiles/testLogFunction.dir/main.cpp.obj
testLogFunction.exe: CMakeFiles/testLogFunction.dir/build.make
testLogFunction.exe: CMakeFiles/testLogFunction.dir/linklibs.rsp
testLogFunction.exe: CMakeFiles/testLogFunction.dir/objects1.rsp
testLogFunction.exe: CMakeFiles/testLogFunction.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\GeeksForGeeksDataStructures\testLogFunction\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable testLogFunction.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\testLogFunction.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testLogFunction.dir/build: testLogFunction.exe

.PHONY : CMakeFiles/testLogFunction.dir/build

CMakeFiles/testLogFunction.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\testLogFunction.dir\cmake_clean.cmake
.PHONY : CMakeFiles/testLogFunction.dir/clean

CMakeFiles/testLogFunction.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\GeeksForGeeksDataStructures\testLogFunction F:\GeeksForGeeksDataStructures\testLogFunction F:\GeeksForGeeksDataStructures\testLogFunction\cmake-build-debug F:\GeeksForGeeksDataStructures\testLogFunction\cmake-build-debug F:\GeeksForGeeksDataStructures\testLogFunction\cmake-build-debug\CMakeFiles\testLogFunction.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/testLogFunction.dir/depend


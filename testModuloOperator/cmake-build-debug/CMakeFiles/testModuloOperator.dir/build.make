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
CMAKE_SOURCE_DIR = F:\GeeksForGeeksDataStructures\testModuloOperator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\GeeksForGeeksDataStructures\testModuloOperator\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/testModuloOperator.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/testModuloOperator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testModuloOperator.dir/flags.make

CMakeFiles/testModuloOperator.dir/main.cpp.obj: CMakeFiles/testModuloOperator.dir/flags.make
CMakeFiles/testModuloOperator.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\GeeksForGeeksDataStructures\testModuloOperator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/testModuloOperator.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\testModuloOperator.dir\main.cpp.obj -c F:\GeeksForGeeksDataStructures\testModuloOperator\main.cpp

CMakeFiles/testModuloOperator.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testModuloOperator.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\GeeksForGeeksDataStructures\testModuloOperator\main.cpp > CMakeFiles\testModuloOperator.dir\main.cpp.i

CMakeFiles/testModuloOperator.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testModuloOperator.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\GeeksForGeeksDataStructures\testModuloOperator\main.cpp -o CMakeFiles\testModuloOperator.dir\main.cpp.s

# Object files for target testModuloOperator
testModuloOperator_OBJECTS = \
"CMakeFiles/testModuloOperator.dir/main.cpp.obj"

# External object files for target testModuloOperator
testModuloOperator_EXTERNAL_OBJECTS =

testModuloOperator.exe: CMakeFiles/testModuloOperator.dir/main.cpp.obj
testModuloOperator.exe: CMakeFiles/testModuloOperator.dir/build.make
testModuloOperator.exe: CMakeFiles/testModuloOperator.dir/linklibs.rsp
testModuloOperator.exe: CMakeFiles/testModuloOperator.dir/objects1.rsp
testModuloOperator.exe: CMakeFiles/testModuloOperator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\GeeksForGeeksDataStructures\testModuloOperator\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable testModuloOperator.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\testModuloOperator.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testModuloOperator.dir/build: testModuloOperator.exe

.PHONY : CMakeFiles/testModuloOperator.dir/build

CMakeFiles/testModuloOperator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\testModuloOperator.dir\cmake_clean.cmake
.PHONY : CMakeFiles/testModuloOperator.dir/clean

CMakeFiles/testModuloOperator.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\GeeksForGeeksDataStructures\testModuloOperator F:\GeeksForGeeksDataStructures\testModuloOperator F:\GeeksForGeeksDataStructures\testModuloOperator\cmake-build-debug F:\GeeksForGeeksDataStructures\testModuloOperator\cmake-build-debug F:\GeeksForGeeksDataStructures\testModuloOperator\cmake-build-debug\CMakeFiles\testModuloOperator.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/testModuloOperator.dir/depend


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
CMAKE_SOURCE_DIR = F:\GeeksForGeeksDataStructures\testForLoopStatements

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\GeeksForGeeksDataStructures\testForLoopStatements\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/testForLoopStatements.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/testForLoopStatements.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testForLoopStatements.dir/flags.make

CMakeFiles/testForLoopStatements.dir/main.cpp.obj: CMakeFiles/testForLoopStatements.dir/flags.make
CMakeFiles/testForLoopStatements.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\GeeksForGeeksDataStructures\testForLoopStatements\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/testForLoopStatements.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\testForLoopStatements.dir\main.cpp.obj -c F:\GeeksForGeeksDataStructures\testForLoopStatements\main.cpp

CMakeFiles/testForLoopStatements.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testForLoopStatements.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\GeeksForGeeksDataStructures\testForLoopStatements\main.cpp > CMakeFiles\testForLoopStatements.dir\main.cpp.i

CMakeFiles/testForLoopStatements.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testForLoopStatements.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\GeeksForGeeksDataStructures\testForLoopStatements\main.cpp -o CMakeFiles\testForLoopStatements.dir\main.cpp.s

# Object files for target testForLoopStatements
testForLoopStatements_OBJECTS = \
"CMakeFiles/testForLoopStatements.dir/main.cpp.obj"

# External object files for target testForLoopStatements
testForLoopStatements_EXTERNAL_OBJECTS =

testForLoopStatements.exe: CMakeFiles/testForLoopStatements.dir/main.cpp.obj
testForLoopStatements.exe: CMakeFiles/testForLoopStatements.dir/build.make
testForLoopStatements.exe: CMakeFiles/testForLoopStatements.dir/linklibs.rsp
testForLoopStatements.exe: CMakeFiles/testForLoopStatements.dir/objects1.rsp
testForLoopStatements.exe: CMakeFiles/testForLoopStatements.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\GeeksForGeeksDataStructures\testForLoopStatements\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable testForLoopStatements.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\testForLoopStatements.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testForLoopStatements.dir/build: testForLoopStatements.exe

.PHONY : CMakeFiles/testForLoopStatements.dir/build

CMakeFiles/testForLoopStatements.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\testForLoopStatements.dir\cmake_clean.cmake
.PHONY : CMakeFiles/testForLoopStatements.dir/clean

CMakeFiles/testForLoopStatements.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\GeeksForGeeksDataStructures\testForLoopStatements F:\GeeksForGeeksDataStructures\testForLoopStatements F:\GeeksForGeeksDataStructures\testForLoopStatements\cmake-build-debug F:\GeeksForGeeksDataStructures\testForLoopStatements\cmake-build-debug F:\GeeksForGeeksDataStructures\testForLoopStatements\cmake-build-debug\CMakeFiles\testForLoopStatements.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/testForLoopStatements.dir/depend


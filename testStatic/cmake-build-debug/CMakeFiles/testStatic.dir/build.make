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
CMAKE_SOURCE_DIR = F:\GeeksForGeeksDataStructures\testStatic

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\GeeksForGeeksDataStructures\testStatic\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/testStatic.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/testStatic.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testStatic.dir/flags.make

CMakeFiles/testStatic.dir/main.cpp.obj: CMakeFiles/testStatic.dir/flags.make
CMakeFiles/testStatic.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\GeeksForGeeksDataStructures\testStatic\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/testStatic.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\testStatic.dir\main.cpp.obj -c F:\GeeksForGeeksDataStructures\testStatic\main.cpp

CMakeFiles/testStatic.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testStatic.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\GeeksForGeeksDataStructures\testStatic\main.cpp > CMakeFiles\testStatic.dir\main.cpp.i

CMakeFiles/testStatic.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testStatic.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\GeeksForGeeksDataStructures\testStatic\main.cpp -o CMakeFiles\testStatic.dir\main.cpp.s

# Object files for target testStatic
testStatic_OBJECTS = \
"CMakeFiles/testStatic.dir/main.cpp.obj"

# External object files for target testStatic
testStatic_EXTERNAL_OBJECTS =

testStatic.exe: CMakeFiles/testStatic.dir/main.cpp.obj
testStatic.exe: CMakeFiles/testStatic.dir/build.make
testStatic.exe: CMakeFiles/testStatic.dir/linklibs.rsp
testStatic.exe: CMakeFiles/testStatic.dir/objects1.rsp
testStatic.exe: CMakeFiles/testStatic.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\GeeksForGeeksDataStructures\testStatic\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable testStatic.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\testStatic.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testStatic.dir/build: testStatic.exe

.PHONY : CMakeFiles/testStatic.dir/build

CMakeFiles/testStatic.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\testStatic.dir\cmake_clean.cmake
.PHONY : CMakeFiles/testStatic.dir/clean

CMakeFiles/testStatic.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\GeeksForGeeksDataStructures\testStatic F:\GeeksForGeeksDataStructures\testStatic F:\GeeksForGeeksDataStructures\testStatic\cmake-build-debug F:\GeeksForGeeksDataStructures\testStatic\cmake-build-debug F:\GeeksForGeeksDataStructures\testStatic\cmake-build-debug\CMakeFiles\testStatic.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/testStatic.dir/depend


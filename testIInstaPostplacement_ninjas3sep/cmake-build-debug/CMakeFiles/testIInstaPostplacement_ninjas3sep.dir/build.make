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
CMAKE_SOURCE_DIR = F:\GeeksForGeeksDataStructures\testIInstaPostplacement_ninjas3sep

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\GeeksForGeeksDataStructures\testIInstaPostplacement_ninjas3sep\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/testIInstaPostplacement_ninjas3sep.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/testIInstaPostplacement_ninjas3sep.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testIInstaPostplacement_ninjas3sep.dir/flags.make

CMakeFiles/testIInstaPostplacement_ninjas3sep.dir/main.cpp.obj: CMakeFiles/testIInstaPostplacement_ninjas3sep.dir/flags.make
CMakeFiles/testIInstaPostplacement_ninjas3sep.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\GeeksForGeeksDataStructures\testIInstaPostplacement_ninjas3sep\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/testIInstaPostplacement_ninjas3sep.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\testIInstaPostplacement_ninjas3sep.dir\main.cpp.obj -c F:\GeeksForGeeksDataStructures\testIInstaPostplacement_ninjas3sep\main.cpp

CMakeFiles/testIInstaPostplacement_ninjas3sep.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testIInstaPostplacement_ninjas3sep.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\GeeksForGeeksDataStructures\testIInstaPostplacement_ninjas3sep\main.cpp > CMakeFiles\testIInstaPostplacement_ninjas3sep.dir\main.cpp.i

CMakeFiles/testIInstaPostplacement_ninjas3sep.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testIInstaPostplacement_ninjas3sep.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\GeeksForGeeksDataStructures\testIInstaPostplacement_ninjas3sep\main.cpp -o CMakeFiles\testIInstaPostplacement_ninjas3sep.dir\main.cpp.s

# Object files for target testIInstaPostplacement_ninjas3sep
testIInstaPostplacement_ninjas3sep_OBJECTS = \
"CMakeFiles/testIInstaPostplacement_ninjas3sep.dir/main.cpp.obj"

# External object files for target testIInstaPostplacement_ninjas3sep
testIInstaPostplacement_ninjas3sep_EXTERNAL_OBJECTS =

testIInstaPostplacement_ninjas3sep.exe: CMakeFiles/testIInstaPostplacement_ninjas3sep.dir/main.cpp.obj
testIInstaPostplacement_ninjas3sep.exe: CMakeFiles/testIInstaPostplacement_ninjas3sep.dir/build.make
testIInstaPostplacement_ninjas3sep.exe: CMakeFiles/testIInstaPostplacement_ninjas3sep.dir/linklibs.rsp
testIInstaPostplacement_ninjas3sep.exe: CMakeFiles/testIInstaPostplacement_ninjas3sep.dir/objects1.rsp
testIInstaPostplacement_ninjas3sep.exe: CMakeFiles/testIInstaPostplacement_ninjas3sep.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\GeeksForGeeksDataStructures\testIInstaPostplacement_ninjas3sep\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable testIInstaPostplacement_ninjas3sep.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\testIInstaPostplacement_ninjas3sep.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testIInstaPostplacement_ninjas3sep.dir/build: testIInstaPostplacement_ninjas3sep.exe

.PHONY : CMakeFiles/testIInstaPostplacement_ninjas3sep.dir/build

CMakeFiles/testIInstaPostplacement_ninjas3sep.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\testIInstaPostplacement_ninjas3sep.dir\cmake_clean.cmake
.PHONY : CMakeFiles/testIInstaPostplacement_ninjas3sep.dir/clean

CMakeFiles/testIInstaPostplacement_ninjas3sep.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\GeeksForGeeksDataStructures\testIInstaPostplacement_ninjas3sep F:\GeeksForGeeksDataStructures\testIInstaPostplacement_ninjas3sep F:\GeeksForGeeksDataStructures\testIInstaPostplacement_ninjas3sep\cmake-build-debug F:\GeeksForGeeksDataStructures\testIInstaPostplacement_ninjas3sep\cmake-build-debug F:\GeeksForGeeksDataStructures\testIInstaPostplacement_ninjas3sep\cmake-build-debug\CMakeFiles\testIInstaPostplacement_ninjas3sep.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/testIInstaPostplacement_ninjas3sep.dir/depend

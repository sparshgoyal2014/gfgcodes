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
CMAKE_SOURCE_DIR = F:\GeeksForGeeksDataStructures\testStaticDataMembers

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\GeeksForGeeksDataStructures\testStaticDataMembers\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/testStaticDataMembers.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/testStaticDataMembers.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testStaticDataMembers.dir/flags.make

CMakeFiles/testStaticDataMembers.dir/main.cpp.obj: CMakeFiles/testStaticDataMembers.dir/flags.make
CMakeFiles/testStaticDataMembers.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\GeeksForGeeksDataStructures\testStaticDataMembers\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/testStaticDataMembers.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\testStaticDataMembers.dir\main.cpp.obj -c F:\GeeksForGeeksDataStructures\testStaticDataMembers\main.cpp

CMakeFiles/testStaticDataMembers.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testStaticDataMembers.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\GeeksForGeeksDataStructures\testStaticDataMembers\main.cpp > CMakeFiles\testStaticDataMembers.dir\main.cpp.i

CMakeFiles/testStaticDataMembers.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testStaticDataMembers.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\GeeksForGeeksDataStructures\testStaticDataMembers\main.cpp -o CMakeFiles\testStaticDataMembers.dir\main.cpp.s

# Object files for target testStaticDataMembers
testStaticDataMembers_OBJECTS = \
"CMakeFiles/testStaticDataMembers.dir/main.cpp.obj"

# External object files for target testStaticDataMembers
testStaticDataMembers_EXTERNAL_OBJECTS =

testStaticDataMembers.exe: CMakeFiles/testStaticDataMembers.dir/main.cpp.obj
testStaticDataMembers.exe: CMakeFiles/testStaticDataMembers.dir/build.make
testStaticDataMembers.exe: CMakeFiles/testStaticDataMembers.dir/linklibs.rsp
testStaticDataMembers.exe: CMakeFiles/testStaticDataMembers.dir/objects1.rsp
testStaticDataMembers.exe: CMakeFiles/testStaticDataMembers.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\GeeksForGeeksDataStructures\testStaticDataMembers\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable testStaticDataMembers.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\testStaticDataMembers.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testStaticDataMembers.dir/build: testStaticDataMembers.exe

.PHONY : CMakeFiles/testStaticDataMembers.dir/build

CMakeFiles/testStaticDataMembers.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\testStaticDataMembers.dir\cmake_clean.cmake
.PHONY : CMakeFiles/testStaticDataMembers.dir/clean

CMakeFiles/testStaticDataMembers.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\GeeksForGeeksDataStructures\testStaticDataMembers F:\GeeksForGeeksDataStructures\testStaticDataMembers F:\GeeksForGeeksDataStructures\testStaticDataMembers\cmake-build-debug F:\GeeksForGeeksDataStructures\testStaticDataMembers\cmake-build-debug F:\GeeksForGeeksDataStructures\testStaticDataMembers\cmake-build-debug\CMakeFiles\testStaticDataMembers.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/testStaticDataMembers.dir/depend


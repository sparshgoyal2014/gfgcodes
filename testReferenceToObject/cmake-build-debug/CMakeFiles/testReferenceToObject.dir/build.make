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
CMAKE_SOURCE_DIR = F:\GeeksForGeeksDataStructures\testReferenceToObject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\GeeksForGeeksDataStructures\testReferenceToObject\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/testReferenceToObject.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/testReferenceToObject.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testReferenceToObject.dir/flags.make

CMakeFiles/testReferenceToObject.dir/main.cpp.obj: CMakeFiles/testReferenceToObject.dir/flags.make
CMakeFiles/testReferenceToObject.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\GeeksForGeeksDataStructures\testReferenceToObject\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/testReferenceToObject.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\testReferenceToObject.dir\main.cpp.obj -c F:\GeeksForGeeksDataStructures\testReferenceToObject\main.cpp

CMakeFiles/testReferenceToObject.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testReferenceToObject.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\GeeksForGeeksDataStructures\testReferenceToObject\main.cpp > CMakeFiles\testReferenceToObject.dir\main.cpp.i

CMakeFiles/testReferenceToObject.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testReferenceToObject.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\GeeksForGeeksDataStructures\testReferenceToObject\main.cpp -o CMakeFiles\testReferenceToObject.dir\main.cpp.s

# Object files for target testReferenceToObject
testReferenceToObject_OBJECTS = \
"CMakeFiles/testReferenceToObject.dir/main.cpp.obj"

# External object files for target testReferenceToObject
testReferenceToObject_EXTERNAL_OBJECTS =

testReferenceToObject.exe: CMakeFiles/testReferenceToObject.dir/main.cpp.obj
testReferenceToObject.exe: CMakeFiles/testReferenceToObject.dir/build.make
testReferenceToObject.exe: CMakeFiles/testReferenceToObject.dir/linklibs.rsp
testReferenceToObject.exe: CMakeFiles/testReferenceToObject.dir/objects1.rsp
testReferenceToObject.exe: CMakeFiles/testReferenceToObject.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\GeeksForGeeksDataStructures\testReferenceToObject\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable testReferenceToObject.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\testReferenceToObject.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testReferenceToObject.dir/build: testReferenceToObject.exe

.PHONY : CMakeFiles/testReferenceToObject.dir/build

CMakeFiles/testReferenceToObject.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\testReferenceToObject.dir\cmake_clean.cmake
.PHONY : CMakeFiles/testReferenceToObject.dir/clean

CMakeFiles/testReferenceToObject.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\GeeksForGeeksDataStructures\testReferenceToObject F:\GeeksForGeeksDataStructures\testReferenceToObject F:\GeeksForGeeksDataStructures\testReferenceToObject\cmake-build-debug F:\GeeksForGeeksDataStructures\testReferenceToObject\cmake-build-debug F:\GeeksForGeeksDataStructures\testReferenceToObject\cmake-build-debug\CMakeFiles\testReferenceToObject.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/testReferenceToObject.dir/depend


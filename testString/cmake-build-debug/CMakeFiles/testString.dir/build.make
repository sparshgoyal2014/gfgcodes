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
CMAKE_SOURCE_DIR = F:\GeeksForGeeksDataStructures\testString

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\GeeksForGeeksDataStructures\testString\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/testString.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/testString.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testString.dir/flags.make

CMakeFiles/testString.dir/main.cpp.obj: CMakeFiles/testString.dir/flags.make
CMakeFiles/testString.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\GeeksForGeeksDataStructures\testString\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/testString.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\testString.dir\main.cpp.obj -c F:\GeeksForGeeksDataStructures\testString\main.cpp

CMakeFiles/testString.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testString.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\GeeksForGeeksDataStructures\testString\main.cpp > CMakeFiles\testString.dir\main.cpp.i

CMakeFiles/testString.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testString.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\GeeksForGeeksDataStructures\testString\main.cpp -o CMakeFiles\testString.dir\main.cpp.s

# Object files for target testString
testString_OBJECTS = \
"CMakeFiles/testString.dir/main.cpp.obj"

# External object files for target testString
testString_EXTERNAL_OBJECTS =

testString.exe: CMakeFiles/testString.dir/main.cpp.obj
testString.exe: CMakeFiles/testString.dir/build.make
testString.exe: CMakeFiles/testString.dir/linklibs.rsp
testString.exe: CMakeFiles/testString.dir/objects1.rsp
testString.exe: CMakeFiles/testString.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\GeeksForGeeksDataStructures\testString\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable testString.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\testString.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testString.dir/build: testString.exe

.PHONY : CMakeFiles/testString.dir/build

CMakeFiles/testString.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\testString.dir\cmake_clean.cmake
.PHONY : CMakeFiles/testString.dir/clean

CMakeFiles/testString.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\GeeksForGeeksDataStructures\testString F:\GeeksForGeeksDataStructures\testString F:\GeeksForGeeksDataStructures\testString\cmake-build-debug F:\GeeksForGeeksDataStructures\testString\cmake-build-debug F:\GeeksForGeeksDataStructures\testString\cmake-build-debug\CMakeFiles\testString.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/testString.dir/depend


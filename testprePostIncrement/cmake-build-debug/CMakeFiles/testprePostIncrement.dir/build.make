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
CMAKE_SOURCE_DIR = F:\GeeksForGeeksDataStructures\testprePostIncrement

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\GeeksForGeeksDataStructures\testprePostIncrement\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/testprePostIncrement.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/testprePostIncrement.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testprePostIncrement.dir/flags.make

CMakeFiles/testprePostIncrement.dir/main.cpp.obj: CMakeFiles/testprePostIncrement.dir/flags.make
CMakeFiles/testprePostIncrement.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\GeeksForGeeksDataStructures\testprePostIncrement\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/testprePostIncrement.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\testprePostIncrement.dir\main.cpp.obj -c F:\GeeksForGeeksDataStructures\testprePostIncrement\main.cpp

CMakeFiles/testprePostIncrement.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testprePostIncrement.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\GeeksForGeeksDataStructures\testprePostIncrement\main.cpp > CMakeFiles\testprePostIncrement.dir\main.cpp.i

CMakeFiles/testprePostIncrement.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testprePostIncrement.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\GeeksForGeeksDataStructures\testprePostIncrement\main.cpp -o CMakeFiles\testprePostIncrement.dir\main.cpp.s

# Object files for target testprePostIncrement
testprePostIncrement_OBJECTS = \
"CMakeFiles/testprePostIncrement.dir/main.cpp.obj"

# External object files for target testprePostIncrement
testprePostIncrement_EXTERNAL_OBJECTS =

testprePostIncrement.exe: CMakeFiles/testprePostIncrement.dir/main.cpp.obj
testprePostIncrement.exe: CMakeFiles/testprePostIncrement.dir/build.make
testprePostIncrement.exe: CMakeFiles/testprePostIncrement.dir/linklibs.rsp
testprePostIncrement.exe: CMakeFiles/testprePostIncrement.dir/objects1.rsp
testprePostIncrement.exe: CMakeFiles/testprePostIncrement.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\GeeksForGeeksDataStructures\testprePostIncrement\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable testprePostIncrement.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\testprePostIncrement.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testprePostIncrement.dir/build: testprePostIncrement.exe

.PHONY : CMakeFiles/testprePostIncrement.dir/build

CMakeFiles/testprePostIncrement.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\testprePostIncrement.dir\cmake_clean.cmake
.PHONY : CMakeFiles/testprePostIncrement.dir/clean

CMakeFiles/testprePostIncrement.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\GeeksForGeeksDataStructures\testprePostIncrement F:\GeeksForGeeksDataStructures\testprePostIncrement F:\GeeksForGeeksDataStructures\testprePostIncrement\cmake-build-debug F:\GeeksForGeeksDataStructures\testprePostIncrement\cmake-build-debug F:\GeeksForGeeksDataStructures\testprePostIncrement\cmake-build-debug\CMakeFiles\testprePostIncrement.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/testprePostIncrement.dir/depend


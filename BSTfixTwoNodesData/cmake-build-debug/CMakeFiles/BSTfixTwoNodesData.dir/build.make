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
CMAKE_SOURCE_DIR = F:\GeeksForGeeksDataStructures\BSTfixTwoNodesData

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\GeeksForGeeksDataStructures\BSTfixTwoNodesData\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BSTfixTwoNodesData.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BSTfixTwoNodesData.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BSTfixTwoNodesData.dir/flags.make

CMakeFiles/BSTfixTwoNodesData.dir/main.cpp.obj: CMakeFiles/BSTfixTwoNodesData.dir/flags.make
CMakeFiles/BSTfixTwoNodesData.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\GeeksForGeeksDataStructures\BSTfixTwoNodesData\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BSTfixTwoNodesData.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\BSTfixTwoNodesData.dir\main.cpp.obj -c F:\GeeksForGeeksDataStructures\BSTfixTwoNodesData\main.cpp

CMakeFiles/BSTfixTwoNodesData.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BSTfixTwoNodesData.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\GeeksForGeeksDataStructures\BSTfixTwoNodesData\main.cpp > CMakeFiles\BSTfixTwoNodesData.dir\main.cpp.i

CMakeFiles/BSTfixTwoNodesData.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BSTfixTwoNodesData.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\GeeksForGeeksDataStructures\BSTfixTwoNodesData\main.cpp -o CMakeFiles\BSTfixTwoNodesData.dir\main.cpp.s

# Object files for target BSTfixTwoNodesData
BSTfixTwoNodesData_OBJECTS = \
"CMakeFiles/BSTfixTwoNodesData.dir/main.cpp.obj"

# External object files for target BSTfixTwoNodesData
BSTfixTwoNodesData_EXTERNAL_OBJECTS =

BSTfixTwoNodesData.exe: CMakeFiles/BSTfixTwoNodesData.dir/main.cpp.obj
BSTfixTwoNodesData.exe: CMakeFiles/BSTfixTwoNodesData.dir/build.make
BSTfixTwoNodesData.exe: CMakeFiles/BSTfixTwoNodesData.dir/linklibs.rsp
BSTfixTwoNodesData.exe: CMakeFiles/BSTfixTwoNodesData.dir/objects1.rsp
BSTfixTwoNodesData.exe: CMakeFiles/BSTfixTwoNodesData.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\GeeksForGeeksDataStructures\BSTfixTwoNodesData\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable BSTfixTwoNodesData.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\BSTfixTwoNodesData.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BSTfixTwoNodesData.dir/build: BSTfixTwoNodesData.exe

.PHONY : CMakeFiles/BSTfixTwoNodesData.dir/build

CMakeFiles/BSTfixTwoNodesData.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\BSTfixTwoNodesData.dir\cmake_clean.cmake
.PHONY : CMakeFiles/BSTfixTwoNodesData.dir/clean

CMakeFiles/BSTfixTwoNodesData.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\GeeksForGeeksDataStructures\BSTfixTwoNodesData F:\GeeksForGeeksDataStructures\BSTfixTwoNodesData F:\GeeksForGeeksDataStructures\BSTfixTwoNodesData\cmake-build-debug F:\GeeksForGeeksDataStructures\BSTfixTwoNodesData\cmake-build-debug F:\GeeksForGeeksDataStructures\BSTfixTwoNodesData\cmake-build-debug\CMakeFiles\BSTfixTwoNodesData.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BSTfixTwoNodesData.dir/depend


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
CMAKE_SOURCE_DIR = F:\GeeksForGeeksDataStructures\Greedyfractionalknapsack

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\GeeksForGeeksDataStructures\Greedyfractionalknapsack\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Greedyfractionalknapsack.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Greedyfractionalknapsack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Greedyfractionalknapsack.dir/flags.make

CMakeFiles/Greedyfractionalknapsack.dir/main.cpp.obj: CMakeFiles/Greedyfractionalknapsack.dir/flags.make
CMakeFiles/Greedyfractionalknapsack.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\GeeksForGeeksDataStructures\Greedyfractionalknapsack\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Greedyfractionalknapsack.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Greedyfractionalknapsack.dir\main.cpp.obj -c F:\GeeksForGeeksDataStructures\Greedyfractionalknapsack\main.cpp

CMakeFiles/Greedyfractionalknapsack.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Greedyfractionalknapsack.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\GeeksForGeeksDataStructures\Greedyfractionalknapsack\main.cpp > CMakeFiles\Greedyfractionalknapsack.dir\main.cpp.i

CMakeFiles/Greedyfractionalknapsack.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Greedyfractionalknapsack.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\GeeksForGeeksDataStructures\Greedyfractionalknapsack\main.cpp -o CMakeFiles\Greedyfractionalknapsack.dir\main.cpp.s

# Object files for target Greedyfractionalknapsack
Greedyfractionalknapsack_OBJECTS = \
"CMakeFiles/Greedyfractionalknapsack.dir/main.cpp.obj"

# External object files for target Greedyfractionalknapsack
Greedyfractionalknapsack_EXTERNAL_OBJECTS =

Greedyfractionalknapsack.exe: CMakeFiles/Greedyfractionalknapsack.dir/main.cpp.obj
Greedyfractionalknapsack.exe: CMakeFiles/Greedyfractionalknapsack.dir/build.make
Greedyfractionalknapsack.exe: CMakeFiles/Greedyfractionalknapsack.dir/linklibs.rsp
Greedyfractionalknapsack.exe: CMakeFiles/Greedyfractionalknapsack.dir/objects1.rsp
Greedyfractionalknapsack.exe: CMakeFiles/Greedyfractionalknapsack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\GeeksForGeeksDataStructures\Greedyfractionalknapsack\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Greedyfractionalknapsack.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Greedyfractionalknapsack.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Greedyfractionalknapsack.dir/build: Greedyfractionalknapsack.exe

.PHONY : CMakeFiles/Greedyfractionalknapsack.dir/build

CMakeFiles/Greedyfractionalknapsack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Greedyfractionalknapsack.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Greedyfractionalknapsack.dir/clean

CMakeFiles/Greedyfractionalknapsack.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\GeeksForGeeksDataStructures\Greedyfractionalknapsack F:\GeeksForGeeksDataStructures\Greedyfractionalknapsack F:\GeeksForGeeksDataStructures\Greedyfractionalknapsack\cmake-build-debug F:\GeeksForGeeksDataStructures\Greedyfractionalknapsack\cmake-build-debug F:\GeeksForGeeksDataStructures\Greedyfractionalknapsack\cmake-build-debug\CMakeFiles\Greedyfractionalknapsack.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Greedyfractionalknapsack.dir/depend


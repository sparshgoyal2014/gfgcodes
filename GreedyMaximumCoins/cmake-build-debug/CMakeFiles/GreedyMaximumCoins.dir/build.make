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
CMAKE_SOURCE_DIR = F:\GeeksForGeeksDataStructures\GreedyMaximumCoins

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\GeeksForGeeksDataStructures\GreedyMaximumCoins\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/GreedyMaximumCoins.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GreedyMaximumCoins.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GreedyMaximumCoins.dir/flags.make

CMakeFiles/GreedyMaximumCoins.dir/main.cpp.obj: CMakeFiles/GreedyMaximumCoins.dir/flags.make
CMakeFiles/GreedyMaximumCoins.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\GeeksForGeeksDataStructures\GreedyMaximumCoins\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GreedyMaximumCoins.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GreedyMaximumCoins.dir\main.cpp.obj -c F:\GeeksForGeeksDataStructures\GreedyMaximumCoins\main.cpp

CMakeFiles/GreedyMaximumCoins.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GreedyMaximumCoins.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\GeeksForGeeksDataStructures\GreedyMaximumCoins\main.cpp > CMakeFiles\GreedyMaximumCoins.dir\main.cpp.i

CMakeFiles/GreedyMaximumCoins.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GreedyMaximumCoins.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\GeeksForGeeksDataStructures\GreedyMaximumCoins\main.cpp -o CMakeFiles\GreedyMaximumCoins.dir\main.cpp.s

# Object files for target GreedyMaximumCoins
GreedyMaximumCoins_OBJECTS = \
"CMakeFiles/GreedyMaximumCoins.dir/main.cpp.obj"

# External object files for target GreedyMaximumCoins
GreedyMaximumCoins_EXTERNAL_OBJECTS =

GreedyMaximumCoins.exe: CMakeFiles/GreedyMaximumCoins.dir/main.cpp.obj
GreedyMaximumCoins.exe: CMakeFiles/GreedyMaximumCoins.dir/build.make
GreedyMaximumCoins.exe: CMakeFiles/GreedyMaximumCoins.dir/linklibs.rsp
GreedyMaximumCoins.exe: CMakeFiles/GreedyMaximumCoins.dir/objects1.rsp
GreedyMaximumCoins.exe: CMakeFiles/GreedyMaximumCoins.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\GeeksForGeeksDataStructures\GreedyMaximumCoins\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable GreedyMaximumCoins.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\GreedyMaximumCoins.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GreedyMaximumCoins.dir/build: GreedyMaximumCoins.exe

.PHONY : CMakeFiles/GreedyMaximumCoins.dir/build

CMakeFiles/GreedyMaximumCoins.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\GreedyMaximumCoins.dir\cmake_clean.cmake
.PHONY : CMakeFiles/GreedyMaximumCoins.dir/clean

CMakeFiles/GreedyMaximumCoins.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\GeeksForGeeksDataStructures\GreedyMaximumCoins F:\GeeksForGeeksDataStructures\GreedyMaximumCoins F:\GeeksForGeeksDataStructures\GreedyMaximumCoins\cmake-build-debug F:\GeeksForGeeksDataStructures\GreedyMaximumCoins\cmake-build-debug F:\GeeksForGeeksDataStructures\GreedyMaximumCoins\cmake-build-debug\CMakeFiles\GreedyMaximumCoins.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GreedyMaximumCoins.dir/depend


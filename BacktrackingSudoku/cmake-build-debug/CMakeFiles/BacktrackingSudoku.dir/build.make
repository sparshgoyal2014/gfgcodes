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
CMAKE_SOURCE_DIR = F:\GeeksForGeeksDataStructures\BacktrackingSudoku

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\GeeksForGeeksDataStructures\BacktrackingSudoku\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BacktrackingSudoku.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BacktrackingSudoku.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BacktrackingSudoku.dir/flags.make

CMakeFiles/BacktrackingSudoku.dir/main.cpp.obj: CMakeFiles/BacktrackingSudoku.dir/flags.make
CMakeFiles/BacktrackingSudoku.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\GeeksForGeeksDataStructures\BacktrackingSudoku\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BacktrackingSudoku.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\BacktrackingSudoku.dir\main.cpp.obj -c F:\GeeksForGeeksDataStructures\BacktrackingSudoku\main.cpp

CMakeFiles/BacktrackingSudoku.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BacktrackingSudoku.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\GeeksForGeeksDataStructures\BacktrackingSudoku\main.cpp > CMakeFiles\BacktrackingSudoku.dir\main.cpp.i

CMakeFiles/BacktrackingSudoku.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BacktrackingSudoku.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\GeeksForGeeksDataStructures\BacktrackingSudoku\main.cpp -o CMakeFiles\BacktrackingSudoku.dir\main.cpp.s

# Object files for target BacktrackingSudoku
BacktrackingSudoku_OBJECTS = \
"CMakeFiles/BacktrackingSudoku.dir/main.cpp.obj"

# External object files for target BacktrackingSudoku
BacktrackingSudoku_EXTERNAL_OBJECTS =

BacktrackingSudoku.exe: CMakeFiles/BacktrackingSudoku.dir/main.cpp.obj
BacktrackingSudoku.exe: CMakeFiles/BacktrackingSudoku.dir/build.make
BacktrackingSudoku.exe: CMakeFiles/BacktrackingSudoku.dir/linklibs.rsp
BacktrackingSudoku.exe: CMakeFiles/BacktrackingSudoku.dir/objects1.rsp
BacktrackingSudoku.exe: CMakeFiles/BacktrackingSudoku.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\GeeksForGeeksDataStructures\BacktrackingSudoku\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable BacktrackingSudoku.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\BacktrackingSudoku.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BacktrackingSudoku.dir/build: BacktrackingSudoku.exe

.PHONY : CMakeFiles/BacktrackingSudoku.dir/build

CMakeFiles/BacktrackingSudoku.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\BacktrackingSudoku.dir\cmake_clean.cmake
.PHONY : CMakeFiles/BacktrackingSudoku.dir/clean

CMakeFiles/BacktrackingSudoku.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\GeeksForGeeksDataStructures\BacktrackingSudoku F:\GeeksForGeeksDataStructures\BacktrackingSudoku F:\GeeksForGeeksDataStructures\BacktrackingSudoku\cmake-build-debug F:\GeeksForGeeksDataStructures\BacktrackingSudoku\cmake-build-debug F:\GeeksForGeeksDataStructures\BacktrackingSudoku\cmake-build-debug\CMakeFiles\BacktrackingSudoku.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BacktrackingSudoku.dir/depend

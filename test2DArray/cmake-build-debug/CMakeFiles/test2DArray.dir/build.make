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
CMAKE_SOURCE_DIR = F:\GeeksForGeeksDataStructures\test2DArray

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\GeeksForGeeksDataStructures\test2DArray\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/test2DArray.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test2DArray.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test2DArray.dir/flags.make

CMakeFiles/test2DArray.dir/main.cpp.obj: CMakeFiles/test2DArray.dir/flags.make
CMakeFiles/test2DArray.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\GeeksForGeeksDataStructures\test2DArray\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test2DArray.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\test2DArray.dir\main.cpp.obj -c F:\GeeksForGeeksDataStructures\test2DArray\main.cpp

CMakeFiles/test2DArray.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test2DArray.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\GeeksForGeeksDataStructures\test2DArray\main.cpp > CMakeFiles\test2DArray.dir\main.cpp.i

CMakeFiles/test2DArray.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test2DArray.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\GeeksForGeeksDataStructures\test2DArray\main.cpp -o CMakeFiles\test2DArray.dir\main.cpp.s

# Object files for target test2DArray
test2DArray_OBJECTS = \
"CMakeFiles/test2DArray.dir/main.cpp.obj"

# External object files for target test2DArray
test2DArray_EXTERNAL_OBJECTS =

test2DArray.exe: CMakeFiles/test2DArray.dir/main.cpp.obj
test2DArray.exe: CMakeFiles/test2DArray.dir/build.make
test2DArray.exe: CMakeFiles/test2DArray.dir/linklibs.rsp
test2DArray.exe: CMakeFiles/test2DArray.dir/objects1.rsp
test2DArray.exe: CMakeFiles/test2DArray.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\GeeksForGeeksDataStructures\test2DArray\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test2DArray.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\test2DArray.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test2DArray.dir/build: test2DArray.exe

.PHONY : CMakeFiles/test2DArray.dir/build

CMakeFiles/test2DArray.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\test2DArray.dir\cmake_clean.cmake
.PHONY : CMakeFiles/test2DArray.dir/clean

CMakeFiles/test2DArray.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\GeeksForGeeksDataStructures\test2DArray F:\GeeksForGeeksDataStructures\test2DArray F:\GeeksForGeeksDataStructures\test2DArray\cmake-build-debug F:\GeeksForGeeksDataStructures\test2DArray\cmake-build-debug F:\GeeksForGeeksDataStructures\test2DArray\cmake-build-debug\CMakeFiles\test2DArray.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test2DArray.dir/depend

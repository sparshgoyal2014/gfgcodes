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
CMAKE_SOURCE_DIR = F:\GeeksForGeeksDataStructures\TreeConstructTreeFromPreOrderAndinOrder

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\GeeksForGeeksDataStructures\TreeConstructTreeFromPreOrderAndinOrder\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TreeConstructTreeFromPreOrderAndinOrder.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TreeConstructTreeFromPreOrderAndinOrder.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TreeConstructTreeFromPreOrderAndinOrder.dir/flags.make

CMakeFiles/TreeConstructTreeFromPreOrderAndinOrder.dir/main.cpp.obj: CMakeFiles/TreeConstructTreeFromPreOrderAndinOrder.dir/flags.make
CMakeFiles/TreeConstructTreeFromPreOrderAndinOrder.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\GeeksForGeeksDataStructures\TreeConstructTreeFromPreOrderAndinOrder\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TreeConstructTreeFromPreOrderAndinOrder.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\TreeConstructTreeFromPreOrderAndinOrder.dir\main.cpp.obj -c F:\GeeksForGeeksDataStructures\TreeConstructTreeFromPreOrderAndinOrder\main.cpp

CMakeFiles/TreeConstructTreeFromPreOrderAndinOrder.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TreeConstructTreeFromPreOrderAndinOrder.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\GeeksForGeeksDataStructures\TreeConstructTreeFromPreOrderAndinOrder\main.cpp > CMakeFiles\TreeConstructTreeFromPreOrderAndinOrder.dir\main.cpp.i

CMakeFiles/TreeConstructTreeFromPreOrderAndinOrder.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TreeConstructTreeFromPreOrderAndinOrder.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\GeeksForGeeksDataStructures\TreeConstructTreeFromPreOrderAndinOrder\main.cpp -o CMakeFiles\TreeConstructTreeFromPreOrderAndinOrder.dir\main.cpp.s

# Object files for target TreeConstructTreeFromPreOrderAndinOrder
TreeConstructTreeFromPreOrderAndinOrder_OBJECTS = \
"CMakeFiles/TreeConstructTreeFromPreOrderAndinOrder.dir/main.cpp.obj"

# External object files for target TreeConstructTreeFromPreOrderAndinOrder
TreeConstructTreeFromPreOrderAndinOrder_EXTERNAL_OBJECTS =

TreeConstructTreeFromPreOrderAndinOrder.exe: CMakeFiles/TreeConstructTreeFromPreOrderAndinOrder.dir/main.cpp.obj
TreeConstructTreeFromPreOrderAndinOrder.exe: CMakeFiles/TreeConstructTreeFromPreOrderAndinOrder.dir/build.make
TreeConstructTreeFromPreOrderAndinOrder.exe: CMakeFiles/TreeConstructTreeFromPreOrderAndinOrder.dir/linklibs.rsp
TreeConstructTreeFromPreOrderAndinOrder.exe: CMakeFiles/TreeConstructTreeFromPreOrderAndinOrder.dir/objects1.rsp
TreeConstructTreeFromPreOrderAndinOrder.exe: CMakeFiles/TreeConstructTreeFromPreOrderAndinOrder.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\GeeksForGeeksDataStructures\TreeConstructTreeFromPreOrderAndinOrder\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TreeConstructTreeFromPreOrderAndinOrder.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\TreeConstructTreeFromPreOrderAndinOrder.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TreeConstructTreeFromPreOrderAndinOrder.dir/build: TreeConstructTreeFromPreOrderAndinOrder.exe

.PHONY : CMakeFiles/TreeConstructTreeFromPreOrderAndinOrder.dir/build

CMakeFiles/TreeConstructTreeFromPreOrderAndinOrder.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TreeConstructTreeFromPreOrderAndinOrder.dir\cmake_clean.cmake
.PHONY : CMakeFiles/TreeConstructTreeFromPreOrderAndinOrder.dir/clean

CMakeFiles/TreeConstructTreeFromPreOrderAndinOrder.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\GeeksForGeeksDataStructures\TreeConstructTreeFromPreOrderAndinOrder F:\GeeksForGeeksDataStructures\TreeConstructTreeFromPreOrderAndinOrder F:\GeeksForGeeksDataStructures\TreeConstructTreeFromPreOrderAndinOrder\cmake-build-debug F:\GeeksForGeeksDataStructures\TreeConstructTreeFromPreOrderAndinOrder\cmake-build-debug F:\GeeksForGeeksDataStructures\TreeConstructTreeFromPreOrderAndinOrder\cmake-build-debug\CMakeFiles\TreeConstructTreeFromPreOrderAndinOrder.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TreeConstructTreeFromPreOrderAndinOrder.dir/depend


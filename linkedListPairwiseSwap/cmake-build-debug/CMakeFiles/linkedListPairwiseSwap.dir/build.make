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
CMAKE_SOURCE_DIR = F:\GeeksForGeeksDataStructures\linkedListPairwiseSwap

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\GeeksForGeeksDataStructures\linkedListPairwiseSwap\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/linkedListPairwiseSwap.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/linkedListPairwiseSwap.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/linkedListPairwiseSwap.dir/flags.make

CMakeFiles/linkedListPairwiseSwap.dir/main.cpp.obj: CMakeFiles/linkedListPairwiseSwap.dir/flags.make
CMakeFiles/linkedListPairwiseSwap.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\GeeksForGeeksDataStructures\linkedListPairwiseSwap\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/linkedListPairwiseSwap.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\linkedListPairwiseSwap.dir\main.cpp.obj -c F:\GeeksForGeeksDataStructures\linkedListPairwiseSwap\main.cpp

CMakeFiles/linkedListPairwiseSwap.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/linkedListPairwiseSwap.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\GeeksForGeeksDataStructures\linkedListPairwiseSwap\main.cpp > CMakeFiles\linkedListPairwiseSwap.dir\main.cpp.i

CMakeFiles/linkedListPairwiseSwap.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/linkedListPairwiseSwap.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\GeeksForGeeksDataStructures\linkedListPairwiseSwap\main.cpp -o CMakeFiles\linkedListPairwiseSwap.dir\main.cpp.s

# Object files for target linkedListPairwiseSwap
linkedListPairwiseSwap_OBJECTS = \
"CMakeFiles/linkedListPairwiseSwap.dir/main.cpp.obj"

# External object files for target linkedListPairwiseSwap
linkedListPairwiseSwap_EXTERNAL_OBJECTS =

linkedListPairwiseSwap.exe: CMakeFiles/linkedListPairwiseSwap.dir/main.cpp.obj
linkedListPairwiseSwap.exe: CMakeFiles/linkedListPairwiseSwap.dir/build.make
linkedListPairwiseSwap.exe: CMakeFiles/linkedListPairwiseSwap.dir/linklibs.rsp
linkedListPairwiseSwap.exe: CMakeFiles/linkedListPairwiseSwap.dir/objects1.rsp
linkedListPairwiseSwap.exe: CMakeFiles/linkedListPairwiseSwap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\GeeksForGeeksDataStructures\linkedListPairwiseSwap\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable linkedListPairwiseSwap.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\linkedListPairwiseSwap.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/linkedListPairwiseSwap.dir/build: linkedListPairwiseSwap.exe

.PHONY : CMakeFiles/linkedListPairwiseSwap.dir/build

CMakeFiles/linkedListPairwiseSwap.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\linkedListPairwiseSwap.dir\cmake_clean.cmake
.PHONY : CMakeFiles/linkedListPairwiseSwap.dir/clean

CMakeFiles/linkedListPairwiseSwap.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\GeeksForGeeksDataStructures\linkedListPairwiseSwap F:\GeeksForGeeksDataStructures\linkedListPairwiseSwap F:\GeeksForGeeksDataStructures\linkedListPairwiseSwap\cmake-build-debug F:\GeeksForGeeksDataStructures\linkedListPairwiseSwap\cmake-build-debug F:\GeeksForGeeksDataStructures\linkedListPairwiseSwap\cmake-build-debug\CMakeFiles\linkedListPairwiseSwap.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/linkedListPairwiseSwap.dir/depend

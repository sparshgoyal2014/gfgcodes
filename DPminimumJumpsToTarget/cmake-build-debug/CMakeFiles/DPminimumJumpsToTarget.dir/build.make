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
CMAKE_SOURCE_DIR = F:\GeeksForGeeksDataStructures\DPminimumJumpsToTarget

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\GeeksForGeeksDataStructures\DPminimumJumpsToTarget\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DPminimumJumpsToTarget.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DPminimumJumpsToTarget.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DPminimumJumpsToTarget.dir/flags.make

CMakeFiles/DPminimumJumpsToTarget.dir/main.cpp.obj: CMakeFiles/DPminimumJumpsToTarget.dir/flags.make
CMakeFiles/DPminimumJumpsToTarget.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\GeeksForGeeksDataStructures\DPminimumJumpsToTarget\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DPminimumJumpsToTarget.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\DPminimumJumpsToTarget.dir\main.cpp.obj -c F:\GeeksForGeeksDataStructures\DPminimumJumpsToTarget\main.cpp

CMakeFiles/DPminimumJumpsToTarget.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DPminimumJumpsToTarget.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\GeeksForGeeksDataStructures\DPminimumJumpsToTarget\main.cpp > CMakeFiles\DPminimumJumpsToTarget.dir\main.cpp.i

CMakeFiles/DPminimumJumpsToTarget.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DPminimumJumpsToTarget.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\GeeksForGeeksDataStructures\DPminimumJumpsToTarget\main.cpp -o CMakeFiles\DPminimumJumpsToTarget.dir\main.cpp.s

# Object files for target DPminimumJumpsToTarget
DPminimumJumpsToTarget_OBJECTS = \
"CMakeFiles/DPminimumJumpsToTarget.dir/main.cpp.obj"

# External object files for target DPminimumJumpsToTarget
DPminimumJumpsToTarget_EXTERNAL_OBJECTS =

DPminimumJumpsToTarget.exe: CMakeFiles/DPminimumJumpsToTarget.dir/main.cpp.obj
DPminimumJumpsToTarget.exe: CMakeFiles/DPminimumJumpsToTarget.dir/build.make
DPminimumJumpsToTarget.exe: CMakeFiles/DPminimumJumpsToTarget.dir/linklibs.rsp
DPminimumJumpsToTarget.exe: CMakeFiles/DPminimumJumpsToTarget.dir/objects1.rsp
DPminimumJumpsToTarget.exe: CMakeFiles/DPminimumJumpsToTarget.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\GeeksForGeeksDataStructures\DPminimumJumpsToTarget\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable DPminimumJumpsToTarget.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\DPminimumJumpsToTarget.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DPminimumJumpsToTarget.dir/build: DPminimumJumpsToTarget.exe

.PHONY : CMakeFiles/DPminimumJumpsToTarget.dir/build

CMakeFiles/DPminimumJumpsToTarget.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\DPminimumJumpsToTarget.dir\cmake_clean.cmake
.PHONY : CMakeFiles/DPminimumJumpsToTarget.dir/clean

CMakeFiles/DPminimumJumpsToTarget.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\GeeksForGeeksDataStructures\DPminimumJumpsToTarget F:\GeeksForGeeksDataStructures\DPminimumJumpsToTarget F:\GeeksForGeeksDataStructures\DPminimumJumpsToTarget\cmake-build-debug F:\GeeksForGeeksDataStructures\DPminimumJumpsToTarget\cmake-build-debug F:\GeeksForGeeksDataStructures\DPminimumJumpsToTarget\cmake-build-debug\CMakeFiles\DPminimumJumpsToTarget.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DPminimumJumpsToTarget.dir/depend


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
CMAKE_SOURCE_DIR = F:\GeeksForGeeksDataStructures\CodingNinjaHireTest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\GeeksForGeeksDataStructures\CodingNinjaHireTest\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CodingNinjaHireTest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CodingNinjaHireTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CodingNinjaHireTest.dir/flags.make

CMakeFiles/CodingNinjaHireTest.dir/main.cpp.obj: CMakeFiles/CodingNinjaHireTest.dir/flags.make
CMakeFiles/CodingNinjaHireTest.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\GeeksForGeeksDataStructures\CodingNinjaHireTest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CodingNinjaHireTest.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CodingNinjaHireTest.dir\main.cpp.obj -c F:\GeeksForGeeksDataStructures\CodingNinjaHireTest\main.cpp

CMakeFiles/CodingNinjaHireTest.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CodingNinjaHireTest.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\GeeksForGeeksDataStructures\CodingNinjaHireTest\main.cpp > CMakeFiles\CodingNinjaHireTest.dir\main.cpp.i

CMakeFiles/CodingNinjaHireTest.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CodingNinjaHireTest.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\GeeksForGeeksDataStructures\CodingNinjaHireTest\main.cpp -o CMakeFiles\CodingNinjaHireTest.dir\main.cpp.s

# Object files for target CodingNinjaHireTest
CodingNinjaHireTest_OBJECTS = \
"CMakeFiles/CodingNinjaHireTest.dir/main.cpp.obj"

# External object files for target CodingNinjaHireTest
CodingNinjaHireTest_EXTERNAL_OBJECTS =

CodingNinjaHireTest.exe: CMakeFiles/CodingNinjaHireTest.dir/main.cpp.obj
CodingNinjaHireTest.exe: CMakeFiles/CodingNinjaHireTest.dir/build.make
CodingNinjaHireTest.exe: CMakeFiles/CodingNinjaHireTest.dir/linklibs.rsp
CodingNinjaHireTest.exe: CMakeFiles/CodingNinjaHireTest.dir/objects1.rsp
CodingNinjaHireTest.exe: CMakeFiles/CodingNinjaHireTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\GeeksForGeeksDataStructures\CodingNinjaHireTest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CodingNinjaHireTest.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CodingNinjaHireTest.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CodingNinjaHireTest.dir/build: CodingNinjaHireTest.exe

.PHONY : CMakeFiles/CodingNinjaHireTest.dir/build

CMakeFiles/CodingNinjaHireTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CodingNinjaHireTest.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CodingNinjaHireTest.dir/clean

CMakeFiles/CodingNinjaHireTest.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\GeeksForGeeksDataStructures\CodingNinjaHireTest F:\GeeksForGeeksDataStructures\CodingNinjaHireTest F:\GeeksForGeeksDataStructures\CodingNinjaHireTest\cmake-build-debug F:\GeeksForGeeksDataStructures\CodingNinjaHireTest\cmake-build-debug F:\GeeksForGeeksDataStructures\CodingNinjaHireTest\cmake-build-debug\CMakeFiles\CodingNinjaHireTest.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CodingNinjaHireTest.dir/depend


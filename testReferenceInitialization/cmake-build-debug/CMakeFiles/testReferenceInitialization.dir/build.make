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
CMAKE_SOURCE_DIR = F:\GeeksForGeeksDataStructures\testReferenceInitialization

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\GeeksForGeeksDataStructures\testReferenceInitialization\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/testReferenceInitialization.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/testReferenceInitialization.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testReferenceInitialization.dir/flags.make

CMakeFiles/testReferenceInitialization.dir/main.cpp.obj: CMakeFiles/testReferenceInitialization.dir/flags.make
CMakeFiles/testReferenceInitialization.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\GeeksForGeeksDataStructures\testReferenceInitialization\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/testReferenceInitialization.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\testReferenceInitialization.dir\main.cpp.obj -c F:\GeeksForGeeksDataStructures\testReferenceInitialization\main.cpp

CMakeFiles/testReferenceInitialization.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testReferenceInitialization.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\GeeksForGeeksDataStructures\testReferenceInitialization\main.cpp > CMakeFiles\testReferenceInitialization.dir\main.cpp.i

CMakeFiles/testReferenceInitialization.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testReferenceInitialization.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\GeeksForGeeksDataStructures\testReferenceInitialization\main.cpp -o CMakeFiles\testReferenceInitialization.dir\main.cpp.s

# Object files for target testReferenceInitialization
testReferenceInitialization_OBJECTS = \
"CMakeFiles/testReferenceInitialization.dir/main.cpp.obj"

# External object files for target testReferenceInitialization
testReferenceInitialization_EXTERNAL_OBJECTS =

testReferenceInitialization.exe: CMakeFiles/testReferenceInitialization.dir/main.cpp.obj
testReferenceInitialization.exe: CMakeFiles/testReferenceInitialization.dir/build.make
testReferenceInitialization.exe: CMakeFiles/testReferenceInitialization.dir/linklibs.rsp
testReferenceInitialization.exe: CMakeFiles/testReferenceInitialization.dir/objects1.rsp
testReferenceInitialization.exe: CMakeFiles/testReferenceInitialization.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\GeeksForGeeksDataStructures\testReferenceInitialization\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable testReferenceInitialization.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\testReferenceInitialization.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testReferenceInitialization.dir/build: testReferenceInitialization.exe

.PHONY : CMakeFiles/testReferenceInitialization.dir/build

CMakeFiles/testReferenceInitialization.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\testReferenceInitialization.dir\cmake_clean.cmake
.PHONY : CMakeFiles/testReferenceInitialization.dir/clean

CMakeFiles/testReferenceInitialization.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\GeeksForGeeksDataStructures\testReferenceInitialization F:\GeeksForGeeksDataStructures\testReferenceInitialization F:\GeeksForGeeksDataStructures\testReferenceInitialization\cmake-build-debug F:\GeeksForGeeksDataStructures\testReferenceInitialization\cmake-build-debug F:\GeeksForGeeksDataStructures\testReferenceInitialization\cmake-build-debug\CMakeFiles\testReferenceInitialization.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/testReferenceInitialization.dir/depend


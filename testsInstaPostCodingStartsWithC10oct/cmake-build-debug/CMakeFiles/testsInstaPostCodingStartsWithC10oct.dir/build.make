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
CMAKE_SOURCE_DIR = F:\GeeksForGeeksDataStructures\testsInstaPostCodingStartsWithC10oct

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\GeeksForGeeksDataStructures\testsInstaPostCodingStartsWithC10oct\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/testsInstaPostCodingStartsWithC10oct.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/testsInstaPostCodingStartsWithC10oct.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testsInstaPostCodingStartsWithC10oct.dir/flags.make

CMakeFiles/testsInstaPostCodingStartsWithC10oct.dir/main.cpp.obj: CMakeFiles/testsInstaPostCodingStartsWithC10oct.dir/flags.make
CMakeFiles/testsInstaPostCodingStartsWithC10oct.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\GeeksForGeeksDataStructures\testsInstaPostCodingStartsWithC10oct\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/testsInstaPostCodingStartsWithC10oct.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\testsInstaPostCodingStartsWithC10oct.dir\main.cpp.obj -c F:\GeeksForGeeksDataStructures\testsInstaPostCodingStartsWithC10oct\main.cpp

CMakeFiles/testsInstaPostCodingStartsWithC10oct.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testsInstaPostCodingStartsWithC10oct.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\GeeksForGeeksDataStructures\testsInstaPostCodingStartsWithC10oct\main.cpp > CMakeFiles\testsInstaPostCodingStartsWithC10oct.dir\main.cpp.i

CMakeFiles/testsInstaPostCodingStartsWithC10oct.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testsInstaPostCodingStartsWithC10oct.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\GeeksForGeeksDataStructures\testsInstaPostCodingStartsWithC10oct\main.cpp -o CMakeFiles\testsInstaPostCodingStartsWithC10oct.dir\main.cpp.s

# Object files for target testsInstaPostCodingStartsWithC10oct
testsInstaPostCodingStartsWithC10oct_OBJECTS = \
"CMakeFiles/testsInstaPostCodingStartsWithC10oct.dir/main.cpp.obj"

# External object files for target testsInstaPostCodingStartsWithC10oct
testsInstaPostCodingStartsWithC10oct_EXTERNAL_OBJECTS =

testsInstaPostCodingStartsWithC10oct.exe: CMakeFiles/testsInstaPostCodingStartsWithC10oct.dir/main.cpp.obj
testsInstaPostCodingStartsWithC10oct.exe: CMakeFiles/testsInstaPostCodingStartsWithC10oct.dir/build.make
testsInstaPostCodingStartsWithC10oct.exe: CMakeFiles/testsInstaPostCodingStartsWithC10oct.dir/linklibs.rsp
testsInstaPostCodingStartsWithC10oct.exe: CMakeFiles/testsInstaPostCodingStartsWithC10oct.dir/objects1.rsp
testsInstaPostCodingStartsWithC10oct.exe: CMakeFiles/testsInstaPostCodingStartsWithC10oct.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\GeeksForGeeksDataStructures\testsInstaPostCodingStartsWithC10oct\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable testsInstaPostCodingStartsWithC10oct.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\testsInstaPostCodingStartsWithC10oct.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testsInstaPostCodingStartsWithC10oct.dir/build: testsInstaPostCodingStartsWithC10oct.exe

.PHONY : CMakeFiles/testsInstaPostCodingStartsWithC10oct.dir/build

CMakeFiles/testsInstaPostCodingStartsWithC10oct.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\testsInstaPostCodingStartsWithC10oct.dir\cmake_clean.cmake
.PHONY : CMakeFiles/testsInstaPostCodingStartsWithC10oct.dir/clean

CMakeFiles/testsInstaPostCodingStartsWithC10oct.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\GeeksForGeeksDataStructures\testsInstaPostCodingStartsWithC10oct F:\GeeksForGeeksDataStructures\testsInstaPostCodingStartsWithC10oct F:\GeeksForGeeksDataStructures\testsInstaPostCodingStartsWithC10oct\cmake-build-debug F:\GeeksForGeeksDataStructures\testsInstaPostCodingStartsWithC10oct\cmake-build-debug F:\GeeksForGeeksDataStructures\testsInstaPostCodingStartsWithC10oct\cmake-build-debug\CMakeFiles\testsInstaPostCodingStartsWithC10oct.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/testsInstaPostCodingStartsWithC10oct.dir/depend


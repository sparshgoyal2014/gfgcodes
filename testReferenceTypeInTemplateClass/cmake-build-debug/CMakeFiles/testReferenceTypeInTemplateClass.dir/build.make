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
CMAKE_SOURCE_DIR = F:\GeeksForGeeksDataStructures\testReferenceTypeInTemplateClass

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\GeeksForGeeksDataStructures\testReferenceTypeInTemplateClass\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/testReferenceTypeInTemplateClass.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/testReferenceTypeInTemplateClass.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testReferenceTypeInTemplateClass.dir/flags.make

CMakeFiles/testReferenceTypeInTemplateClass.dir/main.cpp.obj: CMakeFiles/testReferenceTypeInTemplateClass.dir/flags.make
CMakeFiles/testReferenceTypeInTemplateClass.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\GeeksForGeeksDataStructures\testReferenceTypeInTemplateClass\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/testReferenceTypeInTemplateClass.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\testReferenceTypeInTemplateClass.dir\main.cpp.obj -c F:\GeeksForGeeksDataStructures\testReferenceTypeInTemplateClass\main.cpp

CMakeFiles/testReferenceTypeInTemplateClass.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testReferenceTypeInTemplateClass.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\GeeksForGeeksDataStructures\testReferenceTypeInTemplateClass\main.cpp > CMakeFiles\testReferenceTypeInTemplateClass.dir\main.cpp.i

CMakeFiles/testReferenceTypeInTemplateClass.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testReferenceTypeInTemplateClass.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\GeeksForGeeksDataStructures\testReferenceTypeInTemplateClass\main.cpp -o CMakeFiles\testReferenceTypeInTemplateClass.dir\main.cpp.s

# Object files for target testReferenceTypeInTemplateClass
testReferenceTypeInTemplateClass_OBJECTS = \
"CMakeFiles/testReferenceTypeInTemplateClass.dir/main.cpp.obj"

# External object files for target testReferenceTypeInTemplateClass
testReferenceTypeInTemplateClass_EXTERNAL_OBJECTS =

testReferenceTypeInTemplateClass.exe: CMakeFiles/testReferenceTypeInTemplateClass.dir/main.cpp.obj
testReferenceTypeInTemplateClass.exe: CMakeFiles/testReferenceTypeInTemplateClass.dir/build.make
testReferenceTypeInTemplateClass.exe: CMakeFiles/testReferenceTypeInTemplateClass.dir/linklibs.rsp
testReferenceTypeInTemplateClass.exe: CMakeFiles/testReferenceTypeInTemplateClass.dir/objects1.rsp
testReferenceTypeInTemplateClass.exe: CMakeFiles/testReferenceTypeInTemplateClass.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\GeeksForGeeksDataStructures\testReferenceTypeInTemplateClass\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable testReferenceTypeInTemplateClass.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\testReferenceTypeInTemplateClass.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testReferenceTypeInTemplateClass.dir/build: testReferenceTypeInTemplateClass.exe

.PHONY : CMakeFiles/testReferenceTypeInTemplateClass.dir/build

CMakeFiles/testReferenceTypeInTemplateClass.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\testReferenceTypeInTemplateClass.dir\cmake_clean.cmake
.PHONY : CMakeFiles/testReferenceTypeInTemplateClass.dir/clean

CMakeFiles/testReferenceTypeInTemplateClass.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\GeeksForGeeksDataStructures\testReferenceTypeInTemplateClass F:\GeeksForGeeksDataStructures\testReferenceTypeInTemplateClass F:\GeeksForGeeksDataStructures\testReferenceTypeInTemplateClass\cmake-build-debug F:\GeeksForGeeksDataStructures\testReferenceTypeInTemplateClass\cmake-build-debug F:\GeeksForGeeksDataStructures\testReferenceTypeInTemplateClass\cmake-build-debug\CMakeFiles\testReferenceTypeInTemplateClass.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/testReferenceTypeInTemplateClass.dir/depend


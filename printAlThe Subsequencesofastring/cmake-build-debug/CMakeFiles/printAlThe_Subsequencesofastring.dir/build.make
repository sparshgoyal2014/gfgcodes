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
CMAKE_SOURCE_DIR = "F:\GeeksForGeeksDataStructures\printAlThe Subsequencesofastring"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "F:\GeeksForGeeksDataStructures\printAlThe Subsequencesofastring\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/printAlThe_Subsequencesofastring.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/printAlThe_Subsequencesofastring.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/printAlThe_Subsequencesofastring.dir/flags.make

CMakeFiles/printAlThe_Subsequencesofastring.dir/main.cpp.obj: CMakeFiles/printAlThe_Subsequencesofastring.dir/flags.make
CMakeFiles/printAlThe_Subsequencesofastring.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="F:\GeeksForGeeksDataStructures\printAlThe Subsequencesofastring\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/printAlThe_Subsequencesofastring.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\printAlThe_Subsequencesofastring.dir\main.cpp.obj -c "F:\GeeksForGeeksDataStructures\printAlThe Subsequencesofastring\main.cpp"

CMakeFiles/printAlThe_Subsequencesofastring.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/printAlThe_Subsequencesofastring.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "F:\GeeksForGeeksDataStructures\printAlThe Subsequencesofastring\main.cpp" > CMakeFiles\printAlThe_Subsequencesofastring.dir\main.cpp.i

CMakeFiles/printAlThe_Subsequencesofastring.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/printAlThe_Subsequencesofastring.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "F:\GeeksForGeeksDataStructures\printAlThe Subsequencesofastring\main.cpp" -o CMakeFiles\printAlThe_Subsequencesofastring.dir\main.cpp.s

# Object files for target printAlThe_Subsequencesofastring
printAlThe_Subsequencesofastring_OBJECTS = \
"CMakeFiles/printAlThe_Subsequencesofastring.dir/main.cpp.obj"

# External object files for target printAlThe_Subsequencesofastring
printAlThe_Subsequencesofastring_EXTERNAL_OBJECTS =

printAlThe_Subsequencesofastring.exe: CMakeFiles/printAlThe_Subsequencesofastring.dir/main.cpp.obj
printAlThe_Subsequencesofastring.exe: CMakeFiles/printAlThe_Subsequencesofastring.dir/build.make
printAlThe_Subsequencesofastring.exe: CMakeFiles/printAlThe_Subsequencesofastring.dir/linklibs.rsp
printAlThe_Subsequencesofastring.exe: CMakeFiles/printAlThe_Subsequencesofastring.dir/objects1.rsp
printAlThe_Subsequencesofastring.exe: CMakeFiles/printAlThe_Subsequencesofastring.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="F:\GeeksForGeeksDataStructures\printAlThe Subsequencesofastring\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable printAlThe_Subsequencesofastring.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\printAlThe_Subsequencesofastring.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/printAlThe_Subsequencesofastring.dir/build: printAlThe_Subsequencesofastring.exe

.PHONY : CMakeFiles/printAlThe_Subsequencesofastring.dir/build

CMakeFiles/printAlThe_Subsequencesofastring.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\printAlThe_Subsequencesofastring.dir\cmake_clean.cmake
.PHONY : CMakeFiles/printAlThe_Subsequencesofastring.dir/clean

CMakeFiles/printAlThe_Subsequencesofastring.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "F:\GeeksForGeeksDataStructures\printAlThe Subsequencesofastring" "F:\GeeksForGeeksDataStructures\printAlThe Subsequencesofastring" "F:\GeeksForGeeksDataStructures\printAlThe Subsequencesofastring\cmake-build-debug" "F:\GeeksForGeeksDataStructures\printAlThe Subsequencesofastring\cmake-build-debug" "F:\GeeksForGeeksDataStructures\printAlThe Subsequencesofastring\cmake-build-debug\CMakeFiles\printAlThe_Subsequencesofastring.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/printAlThe_Subsequencesofastring.dir/depend


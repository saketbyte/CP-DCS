# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\LIT CONTENT\Tech\MY CP\DCS_DSA\negative to one side"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\LIT CONTENT\Tech\MY CP\DCS_DSA\negative to one side\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/negative_to_one_side.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/negative_to_one_side.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/negative_to_one_side.dir/flags.make

CMakeFiles/negative_to_one_side.dir/main.cpp.obj: CMakeFiles/negative_to_one_side.dir/flags.make
CMakeFiles/negative_to_one_side.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\LIT CONTENT\Tech\MY CP\DCS_DSA\negative to one side\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/negative_to_one_side.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\negative_to_one_side.dir\main.cpp.obj -c "E:\LIT CONTENT\Tech\MY CP\DCS_DSA\negative to one side\main.cpp"

CMakeFiles/negative_to_one_side.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/negative_to_one_side.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\LIT CONTENT\Tech\MY CP\DCS_DSA\negative to one side\main.cpp" > CMakeFiles\negative_to_one_side.dir\main.cpp.i

CMakeFiles/negative_to_one_side.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/negative_to_one_side.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\LIT CONTENT\Tech\MY CP\DCS_DSA\negative to one side\main.cpp" -o CMakeFiles\negative_to_one_side.dir\main.cpp.s

# Object files for target negative_to_one_side
negative_to_one_side_OBJECTS = \
"CMakeFiles/negative_to_one_side.dir/main.cpp.obj"

# External object files for target negative_to_one_side
negative_to_one_side_EXTERNAL_OBJECTS =

negative_to_one_side.exe: CMakeFiles/negative_to_one_side.dir/main.cpp.obj
negative_to_one_side.exe: CMakeFiles/negative_to_one_side.dir/build.make
negative_to_one_side.exe: CMakeFiles/negative_to_one_side.dir/linklibs.rsp
negative_to_one_side.exe: CMakeFiles/negative_to_one_side.dir/objects1.rsp
negative_to_one_side.exe: CMakeFiles/negative_to_one_side.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\LIT CONTENT\Tech\MY CP\DCS_DSA\negative to one side\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable negative_to_one_side.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\negative_to_one_side.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/negative_to_one_side.dir/build: negative_to_one_side.exe

.PHONY : CMakeFiles/negative_to_one_side.dir/build

CMakeFiles/negative_to_one_side.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\negative_to_one_side.dir\cmake_clean.cmake
.PHONY : CMakeFiles/negative_to_one_side.dir/clean

CMakeFiles/negative_to_one_side.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\LIT CONTENT\Tech\MY CP\DCS_DSA\negative to one side" "E:\LIT CONTENT\Tech\MY CP\DCS_DSA\negative to one side" "E:\LIT CONTENT\Tech\MY CP\DCS_DSA\negative to one side\cmake-build-debug" "E:\LIT CONTENT\Tech\MY CP\DCS_DSA\negative to one side\cmake-build-debug" "E:\LIT CONTENT\Tech\MY CP\DCS_DSA\negative to one side\cmake-build-debug\CMakeFiles\negative_to_one_side.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/negative_to_one_side.dir/depend


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
CMAKE_SOURCE_DIR = "E:\LIT CONTENT\Tech\CP-DCS\DCS_DSA\Matrices\Search element 1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\LIT CONTENT\Tech\CP-DCS\DCS_DSA\Matrices\Search element 1\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Search_element_1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Search_element_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Search_element_1.dir/flags.make

CMakeFiles/Search_element_1.dir/main.cpp.obj: CMakeFiles/Search_element_1.dir/flags.make
CMakeFiles/Search_element_1.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\LIT CONTENT\Tech\CP-DCS\DCS_DSA\Matrices\Search element 1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Search_element_1.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Search_element_1.dir\main.cpp.obj -c "E:\LIT CONTENT\Tech\CP-DCS\DCS_DSA\Matrices\Search element 1\main.cpp"

CMakeFiles/Search_element_1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Search_element_1.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\LIT CONTENT\Tech\CP-DCS\DCS_DSA\Matrices\Search element 1\main.cpp" > CMakeFiles\Search_element_1.dir\main.cpp.i

CMakeFiles/Search_element_1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Search_element_1.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\LIT CONTENT\Tech\CP-DCS\DCS_DSA\Matrices\Search element 1\main.cpp" -o CMakeFiles\Search_element_1.dir\main.cpp.s

# Object files for target Search_element_1
Search_element_1_OBJECTS = \
"CMakeFiles/Search_element_1.dir/main.cpp.obj"

# External object files for target Search_element_1
Search_element_1_EXTERNAL_OBJECTS =

Search_element_1.exe: CMakeFiles/Search_element_1.dir/main.cpp.obj
Search_element_1.exe: CMakeFiles/Search_element_1.dir/build.make
Search_element_1.exe: CMakeFiles/Search_element_1.dir/linklibs.rsp
Search_element_1.exe: CMakeFiles/Search_element_1.dir/objects1.rsp
Search_element_1.exe: CMakeFiles/Search_element_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\LIT CONTENT\Tech\CP-DCS\DCS_DSA\Matrices\Search element 1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Search_element_1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Search_element_1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Search_element_1.dir/build: Search_element_1.exe

.PHONY : CMakeFiles/Search_element_1.dir/build

CMakeFiles/Search_element_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Search_element_1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Search_element_1.dir/clean

CMakeFiles/Search_element_1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\LIT CONTENT\Tech\CP-DCS\DCS_DSA\Matrices\Search element 1" "E:\LIT CONTENT\Tech\CP-DCS\DCS_DSA\Matrices\Search element 1" "E:\LIT CONTENT\Tech\CP-DCS\DCS_DSA\Matrices\Search element 1\cmake-build-debug" "E:\LIT CONTENT\Tech\CP-DCS\DCS_DSA\Matrices\Search element 1\cmake-build-debug" "E:\LIT CONTENT\Tech\CP-DCS\DCS_DSA\Matrices\Search element 1\cmake-build-debug\CMakeFiles\Search_element_1.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Search_element_1.dir/depend


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
CMAKE_SOURCE_DIR = "E:\LIT CONTENT\Tech\MY CP\DCS_DSA\Maximum and minimum element in array Kadanes algo"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\LIT CONTENT\Tech\MY CP\DCS_DSA\Maximum and minimum element in array Kadanes algo\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Maximum_and_minimum_element_in_array_Kadanes_algo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Maximum_and_minimum_element_in_array_Kadanes_algo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Maximum_and_minimum_element_in_array_Kadanes_algo.dir/flags.make

CMakeFiles/Maximum_and_minimum_element_in_array_Kadanes_algo.dir/main.cpp.obj: CMakeFiles/Maximum_and_minimum_element_in_array_Kadanes_algo.dir/flags.make
CMakeFiles/Maximum_and_minimum_element_in_array_Kadanes_algo.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\LIT CONTENT\Tech\MY CP\DCS_DSA\Maximum and minimum element in array Kadanes algo\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Maximum_and_minimum_element_in_array_Kadanes_algo.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Maximum_and_minimum_element_in_array_Kadanes_algo.dir\main.cpp.obj -c "E:\LIT CONTENT\Tech\MY CP\DCS_DSA\Maximum and minimum element in array Kadanes algo\main.cpp"

CMakeFiles/Maximum_and_minimum_element_in_array_Kadanes_algo.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Maximum_and_minimum_element_in_array_Kadanes_algo.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\LIT CONTENT\Tech\MY CP\DCS_DSA\Maximum and minimum element in array Kadanes algo\main.cpp" > CMakeFiles\Maximum_and_minimum_element_in_array_Kadanes_algo.dir\main.cpp.i

CMakeFiles/Maximum_and_minimum_element_in_array_Kadanes_algo.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Maximum_and_minimum_element_in_array_Kadanes_algo.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\LIT CONTENT\Tech\MY CP\DCS_DSA\Maximum and minimum element in array Kadanes algo\main.cpp" -o CMakeFiles\Maximum_and_minimum_element_in_array_Kadanes_algo.dir\main.cpp.s

# Object files for target Maximum_and_minimum_element_in_array_Kadanes_algo
Maximum_and_minimum_element_in_array_Kadanes_algo_OBJECTS = \
"CMakeFiles/Maximum_and_minimum_element_in_array_Kadanes_algo.dir/main.cpp.obj"

# External object files for target Maximum_and_minimum_element_in_array_Kadanes_algo
Maximum_and_minimum_element_in_array_Kadanes_algo_EXTERNAL_OBJECTS =

Maximum_and_minimum_element_in_array_Kadanes_algo.exe: CMakeFiles/Maximum_and_minimum_element_in_array_Kadanes_algo.dir/main.cpp.obj
Maximum_and_minimum_element_in_array_Kadanes_algo.exe: CMakeFiles/Maximum_and_minimum_element_in_array_Kadanes_algo.dir/build.make
Maximum_and_minimum_element_in_array_Kadanes_algo.exe: CMakeFiles/Maximum_and_minimum_element_in_array_Kadanes_algo.dir/linklibs.rsp
Maximum_and_minimum_element_in_array_Kadanes_algo.exe: CMakeFiles/Maximum_and_minimum_element_in_array_Kadanes_algo.dir/objects1.rsp
Maximum_and_minimum_element_in_array_Kadanes_algo.exe: CMakeFiles/Maximum_and_minimum_element_in_array_Kadanes_algo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\LIT CONTENT\Tech\MY CP\DCS_DSA\Maximum and minimum element in array Kadanes algo\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Maximum_and_minimum_element_in_array_Kadanes_algo.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Maximum_and_minimum_element_in_array_Kadanes_algo.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Maximum_and_minimum_element_in_array_Kadanes_algo.dir/build: Maximum_and_minimum_element_in_array_Kadanes_algo.exe

.PHONY : CMakeFiles/Maximum_and_minimum_element_in_array_Kadanes_algo.dir/build

CMakeFiles/Maximum_and_minimum_element_in_array_Kadanes_algo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Maximum_and_minimum_element_in_array_Kadanes_algo.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Maximum_and_minimum_element_in_array_Kadanes_algo.dir/clean

CMakeFiles/Maximum_and_minimum_element_in_array_Kadanes_algo.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\LIT CONTENT\Tech\MY CP\DCS_DSA\Maximum and minimum element in array Kadanes algo" "E:\LIT CONTENT\Tech\MY CP\DCS_DSA\Maximum and minimum element in array Kadanes algo" "E:\LIT CONTENT\Tech\MY CP\DCS_DSA\Maximum and minimum element in array Kadanes algo\cmake-build-debug" "E:\LIT CONTENT\Tech\MY CP\DCS_DSA\Maximum and minimum element in array Kadanes algo\cmake-build-debug" "E:\LIT CONTENT\Tech\MY CP\DCS_DSA\Maximum and minimum element in array Kadanes algo\cmake-build-debug\CMakeFiles\Maximum_and_minimum_element_in_array_Kadanes_algo.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Maximum_and_minimum_element_in_array_Kadanes_algo.dir/depend


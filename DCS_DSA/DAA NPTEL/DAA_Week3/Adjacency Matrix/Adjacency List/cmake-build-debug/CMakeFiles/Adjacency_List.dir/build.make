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
CMAKE_SOURCE_DIR = "E:\LIT CONTENT\Tech\CP-DCS\DCS_DSA\DAA NPTEL\DAA_Week3\Adjacency Matrix\Adjacency List"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\LIT CONTENT\Tech\CP-DCS\DCS_DSA\DAA NPTEL\DAA_Week3\Adjacency Matrix\Adjacency List\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Adjacency_List.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Adjacency_List.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Adjacency_List.dir/flags.make

CMakeFiles/Adjacency_List.dir/main.cpp.obj: CMakeFiles/Adjacency_List.dir/flags.make
CMakeFiles/Adjacency_List.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\LIT CONTENT\Tech\CP-DCS\DCS_DSA\DAA NPTEL\DAA_Week3\Adjacency Matrix\Adjacency List\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Adjacency_List.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Adjacency_List.dir\main.cpp.obj -c "E:\LIT CONTENT\Tech\CP-DCS\DCS_DSA\DAA NPTEL\DAA_Week3\Adjacency Matrix\Adjacency List\main.cpp"

CMakeFiles/Adjacency_List.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Adjacency_List.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\LIT CONTENT\Tech\CP-DCS\DCS_DSA\DAA NPTEL\DAA_Week3\Adjacency Matrix\Adjacency List\main.cpp" > CMakeFiles\Adjacency_List.dir\main.cpp.i

CMakeFiles/Adjacency_List.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Adjacency_List.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\LIT CONTENT\Tech\CP-DCS\DCS_DSA\DAA NPTEL\DAA_Week3\Adjacency Matrix\Adjacency List\main.cpp" -o CMakeFiles\Adjacency_List.dir\main.cpp.s

# Object files for target Adjacency_List
Adjacency_List_OBJECTS = \
"CMakeFiles/Adjacency_List.dir/main.cpp.obj"

# External object files for target Adjacency_List
Adjacency_List_EXTERNAL_OBJECTS =

Adjacency_List.exe: CMakeFiles/Adjacency_List.dir/main.cpp.obj
Adjacency_List.exe: CMakeFiles/Adjacency_List.dir/build.make
Adjacency_List.exe: CMakeFiles/Adjacency_List.dir/linklibs.rsp
Adjacency_List.exe: CMakeFiles/Adjacency_List.dir/objects1.rsp
Adjacency_List.exe: CMakeFiles/Adjacency_List.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\LIT CONTENT\Tech\CP-DCS\DCS_DSA\DAA NPTEL\DAA_Week3\Adjacency Matrix\Adjacency List\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Adjacency_List.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Adjacency_List.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Adjacency_List.dir/build: Adjacency_List.exe

.PHONY : CMakeFiles/Adjacency_List.dir/build

CMakeFiles/Adjacency_List.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Adjacency_List.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Adjacency_List.dir/clean

CMakeFiles/Adjacency_List.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\LIT CONTENT\Tech\CP-DCS\DCS_DSA\DAA NPTEL\DAA_Week3\Adjacency Matrix\Adjacency List" "E:\LIT CONTENT\Tech\CP-DCS\DCS_DSA\DAA NPTEL\DAA_Week3\Adjacency Matrix\Adjacency List" "E:\LIT CONTENT\Tech\CP-DCS\DCS_DSA\DAA NPTEL\DAA_Week3\Adjacency Matrix\Adjacency List\cmake-build-debug" "E:\LIT CONTENT\Tech\CP-DCS\DCS_DSA\DAA NPTEL\DAA_Week3\Adjacency Matrix\Adjacency List\cmake-build-debug" "E:\LIT CONTENT\Tech\CP-DCS\DCS_DSA\DAA NPTEL\DAA_Week3\Adjacency Matrix\Adjacency List\cmake-build-debug\CMakeFiles\Adjacency_List.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Adjacency_List.dir/depend

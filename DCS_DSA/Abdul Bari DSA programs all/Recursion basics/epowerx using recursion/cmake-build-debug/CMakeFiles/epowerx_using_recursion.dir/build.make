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
CMAKE_SOURCE_DIR = "E:\LIT CONTENT\Tech\MY CP\DCS_DSA\Abdul Bari DSA programs all\Recursion basics\epowerx using recursion"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\LIT CONTENT\Tech\MY CP\DCS_DSA\Abdul Bari DSA programs all\Recursion basics\epowerx using recursion\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/epowerx_using_recursion.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/epowerx_using_recursion.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/epowerx_using_recursion.dir/flags.make

CMakeFiles/epowerx_using_recursion.dir/main.cpp.obj: CMakeFiles/epowerx_using_recursion.dir/flags.make
CMakeFiles/epowerx_using_recursion.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\LIT CONTENT\Tech\MY CP\DCS_DSA\Abdul Bari DSA programs all\Recursion basics\epowerx using recursion\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/epowerx_using_recursion.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\epowerx_using_recursion.dir\main.cpp.obj -c "E:\LIT CONTENT\Tech\MY CP\DCS_DSA\Abdul Bari DSA programs all\Recursion basics\epowerx using recursion\main.cpp"

CMakeFiles/epowerx_using_recursion.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/epowerx_using_recursion.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\LIT CONTENT\Tech\MY CP\DCS_DSA\Abdul Bari DSA programs all\Recursion basics\epowerx using recursion\main.cpp" > CMakeFiles\epowerx_using_recursion.dir\main.cpp.i

CMakeFiles/epowerx_using_recursion.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/epowerx_using_recursion.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\LIT CONTENT\Tech\MY CP\DCS_DSA\Abdul Bari DSA programs all\Recursion basics\epowerx using recursion\main.cpp" -o CMakeFiles\epowerx_using_recursion.dir\main.cpp.s

# Object files for target epowerx_using_recursion
epowerx_using_recursion_OBJECTS = \
"CMakeFiles/epowerx_using_recursion.dir/main.cpp.obj"

# External object files for target epowerx_using_recursion
epowerx_using_recursion_EXTERNAL_OBJECTS =

epowerx_using_recursion.exe: CMakeFiles/epowerx_using_recursion.dir/main.cpp.obj
epowerx_using_recursion.exe: CMakeFiles/epowerx_using_recursion.dir/build.make
epowerx_using_recursion.exe: CMakeFiles/epowerx_using_recursion.dir/linklibs.rsp
epowerx_using_recursion.exe: CMakeFiles/epowerx_using_recursion.dir/objects1.rsp
epowerx_using_recursion.exe: CMakeFiles/epowerx_using_recursion.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\LIT CONTENT\Tech\MY CP\DCS_DSA\Abdul Bari DSA programs all\Recursion basics\epowerx using recursion\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable epowerx_using_recursion.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\epowerx_using_recursion.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/epowerx_using_recursion.dir/build: epowerx_using_recursion.exe

.PHONY : CMakeFiles/epowerx_using_recursion.dir/build

CMakeFiles/epowerx_using_recursion.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\epowerx_using_recursion.dir\cmake_clean.cmake
.PHONY : CMakeFiles/epowerx_using_recursion.dir/clean

CMakeFiles/epowerx_using_recursion.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\LIT CONTENT\Tech\MY CP\DCS_DSA\Abdul Bari DSA programs all\Recursion basics\epowerx using recursion" "E:\LIT CONTENT\Tech\MY CP\DCS_DSA\Abdul Bari DSA programs all\Recursion basics\epowerx using recursion" "E:\LIT CONTENT\Tech\MY CP\DCS_DSA\Abdul Bari DSA programs all\Recursion basics\epowerx using recursion\cmake-build-debug" "E:\LIT CONTENT\Tech\MY CP\DCS_DSA\Abdul Bari DSA programs all\Recursion basics\epowerx using recursion\cmake-build-debug" "E:\LIT CONTENT\Tech\MY CP\DCS_DSA\Abdul Bari DSA programs all\Recursion basics\epowerx using recursion\cmake-build-debug\CMakeFiles\epowerx_using_recursion.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/epowerx_using_recursion.dir/depend


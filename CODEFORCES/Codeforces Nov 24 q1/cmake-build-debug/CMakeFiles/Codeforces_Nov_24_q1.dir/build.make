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
CMAKE_SOURCE_DIR = "E:\LIT CONTENT\MY CP\c++\Codeforces Nov 24 q1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\LIT CONTENT\MY CP\c++\Codeforces Nov 24 q1\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Codeforces_Nov_24_q1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Codeforces_Nov_24_q1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Codeforces_Nov_24_q1.dir/flags.make

CMakeFiles/Codeforces_Nov_24_q1.dir/main.cpp.obj: CMakeFiles/Codeforces_Nov_24_q1.dir/flags.make
CMakeFiles/Codeforces_Nov_24_q1.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\LIT CONTENT\MY CP\c++\Codeforces Nov 24 q1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Codeforces_Nov_24_q1.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Codeforces_Nov_24_q1.dir\main.cpp.obj -c "E:\LIT CONTENT\MY CP\c++\Codeforces Nov 24 q1\main.cpp"

CMakeFiles/Codeforces_Nov_24_q1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Codeforces_Nov_24_q1.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\LIT CONTENT\MY CP\c++\Codeforces Nov 24 q1\main.cpp" > CMakeFiles\Codeforces_Nov_24_q1.dir\main.cpp.i

CMakeFiles/Codeforces_Nov_24_q1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Codeforces_Nov_24_q1.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\LIT CONTENT\MY CP\c++\Codeforces Nov 24 q1\main.cpp" -o CMakeFiles\Codeforces_Nov_24_q1.dir\main.cpp.s

# Object files for target Codeforces_Nov_24_q1
Codeforces_Nov_24_q1_OBJECTS = \
"CMakeFiles/Codeforces_Nov_24_q1.dir/main.cpp.obj"

# External object files for target Codeforces_Nov_24_q1
Codeforces_Nov_24_q1_EXTERNAL_OBJECTS =

Codeforces_Nov_24_q1.exe: CMakeFiles/Codeforces_Nov_24_q1.dir/main.cpp.obj
Codeforces_Nov_24_q1.exe: CMakeFiles/Codeforces_Nov_24_q1.dir/build.make
Codeforces_Nov_24_q1.exe: CMakeFiles/Codeforces_Nov_24_q1.dir/linklibs.rsp
Codeforces_Nov_24_q1.exe: CMakeFiles/Codeforces_Nov_24_q1.dir/objects1.rsp
Codeforces_Nov_24_q1.exe: CMakeFiles/Codeforces_Nov_24_q1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\LIT CONTENT\MY CP\c++\Codeforces Nov 24 q1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Codeforces_Nov_24_q1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Codeforces_Nov_24_q1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Codeforces_Nov_24_q1.dir/build: Codeforces_Nov_24_q1.exe

.PHONY : CMakeFiles/Codeforces_Nov_24_q1.dir/build

CMakeFiles/Codeforces_Nov_24_q1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Codeforces_Nov_24_q1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Codeforces_Nov_24_q1.dir/clean

CMakeFiles/Codeforces_Nov_24_q1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\LIT CONTENT\MY CP\c++\Codeforces Nov 24 q1" "E:\LIT CONTENT\MY CP\c++\Codeforces Nov 24 q1" "E:\LIT CONTENT\MY CP\c++\Codeforces Nov 24 q1\cmake-build-debug" "E:\LIT CONTENT\MY CP\c++\Codeforces Nov 24 q1\cmake-build-debug" "E:\LIT CONTENT\MY CP\c++\Codeforces Nov 24 q1\cmake-build-debug\CMakeFiles\Codeforces_Nov_24_q1.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Codeforces_Nov_24_q1.dir/depend


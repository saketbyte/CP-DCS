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
CMAKE_SOURCE_DIR = "E:\LIT CONTENT\MY CP\c++\1440A"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\LIT CONTENT\MY CP\c++\1440A\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/1440A.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1440A.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1440A.dir/flags.make

CMakeFiles/1440A.dir/main.cpp.obj: CMakeFiles/1440A.dir/flags.make
CMakeFiles/1440A.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\LIT CONTENT\MY CP\c++\1440A\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1440A.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\1440A.dir\main.cpp.obj -c "E:\LIT CONTENT\MY CP\c++\1440A\main.cpp"

CMakeFiles/1440A.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1440A.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\LIT CONTENT\MY CP\c++\1440A\main.cpp" > CMakeFiles\1440A.dir\main.cpp.i

CMakeFiles/1440A.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1440A.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\LIT CONTENT\MY CP\c++\1440A\main.cpp" -o CMakeFiles\1440A.dir\main.cpp.s

# Object files for target 1440A
1440A_OBJECTS = \
"CMakeFiles/1440A.dir/main.cpp.obj"

# External object files for target 1440A
1440A_EXTERNAL_OBJECTS =

1440A.exe: CMakeFiles/1440A.dir/main.cpp.obj
1440A.exe: CMakeFiles/1440A.dir/build.make
1440A.exe: CMakeFiles/1440A.dir/linklibs.rsp
1440A.exe: CMakeFiles/1440A.dir/objects1.rsp
1440A.exe: CMakeFiles/1440A.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\LIT CONTENT\MY CP\c++\1440A\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1440A.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\1440A.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1440A.dir/build: 1440A.exe

.PHONY : CMakeFiles/1440A.dir/build

CMakeFiles/1440A.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\1440A.dir\cmake_clean.cmake
.PHONY : CMakeFiles/1440A.dir/clean

CMakeFiles/1440A.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\LIT CONTENT\MY CP\c++\1440A" "E:\LIT CONTENT\MY CP\c++\1440A" "E:\LIT CONTENT\MY CP\c++\1440A\cmake-build-debug" "E:\LIT CONTENT\MY CP\c++\1440A\cmake-build-debug" "E:\LIT CONTENT\MY CP\c++\1440A\cmake-build-debug\CMakeFiles\1440A.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/1440A.dir/depend

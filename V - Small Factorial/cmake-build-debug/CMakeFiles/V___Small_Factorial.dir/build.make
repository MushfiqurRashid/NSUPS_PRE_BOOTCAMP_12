# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "F:\Pre Bootcamp 1\Clion\V - Small Factorial"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "F:\Pre Bootcamp 1\Clion\V - Small Factorial\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/V___Small_Factorial.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/V___Small_Factorial.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/V___Small_Factorial.dir/flags.make

CMakeFiles/V___Small_Factorial.dir/main.cpp.obj: CMakeFiles/V___Small_Factorial.dir/flags.make
CMakeFiles/V___Small_Factorial.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="F:\Pre Bootcamp 1\Clion\V - Small Factorial\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/V___Small_Factorial.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\V___Small_Factorial.dir\main.cpp.obj -c "F:\Pre Bootcamp 1\Clion\V - Small Factorial\main.cpp"

CMakeFiles/V___Small_Factorial.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/V___Small_Factorial.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "F:\Pre Bootcamp 1\Clion\V - Small Factorial\main.cpp" > CMakeFiles\V___Small_Factorial.dir\main.cpp.i

CMakeFiles/V___Small_Factorial.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/V___Small_Factorial.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "F:\Pre Bootcamp 1\Clion\V - Small Factorial\main.cpp" -o CMakeFiles\V___Small_Factorial.dir\main.cpp.s

# Object files for target V___Small_Factorial
V___Small_Factorial_OBJECTS = \
"CMakeFiles/V___Small_Factorial.dir/main.cpp.obj"

# External object files for target V___Small_Factorial
V___Small_Factorial_EXTERNAL_OBJECTS =

V___Small_Factorial.exe: CMakeFiles/V___Small_Factorial.dir/main.cpp.obj
V___Small_Factorial.exe: CMakeFiles/V___Small_Factorial.dir/build.make
V___Small_Factorial.exe: CMakeFiles/V___Small_Factorial.dir/linklibs.rsp
V___Small_Factorial.exe: CMakeFiles/V___Small_Factorial.dir/objects1.rsp
V___Small_Factorial.exe: CMakeFiles/V___Small_Factorial.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="F:\Pre Bootcamp 1\Clion\V - Small Factorial\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable V___Small_Factorial.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\V___Small_Factorial.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/V___Small_Factorial.dir/build: V___Small_Factorial.exe
.PHONY : CMakeFiles/V___Small_Factorial.dir/build

CMakeFiles/V___Small_Factorial.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\V___Small_Factorial.dir\cmake_clean.cmake
.PHONY : CMakeFiles/V___Small_Factorial.dir/clean

CMakeFiles/V___Small_Factorial.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "F:\Pre Bootcamp 1\Clion\V - Small Factorial" "F:\Pre Bootcamp 1\Clion\V - Small Factorial" "F:\Pre Bootcamp 1\Clion\V - Small Factorial\cmake-build-debug" "F:\Pre Bootcamp 1\Clion\V - Small Factorial\cmake-build-debug" "F:\Pre Bootcamp 1\Clion\V - Small Factorial\cmake-build-debug\CMakeFiles\V___Small_Factorial.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/V___Small_Factorial.dir/depend

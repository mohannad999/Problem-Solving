# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/02_CmakeProject"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/02_CmakeProject/build"

# Include any dependencies generated for this target.
include CMakeFiles/mathLib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/mathLib.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/mathLib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mathLib.dir/flags.make

CMakeFiles/mathLib.dir/math.cpp.o: CMakeFiles/mathLib.dir/flags.make
CMakeFiles/mathLib.dir/math.cpp.o: ../math.cpp
CMakeFiles/mathLib.dir/math.cpp.o: CMakeFiles/mathLib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/02_CmakeProject/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mathLib.dir/math.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mathLib.dir/math.cpp.o -MF CMakeFiles/mathLib.dir/math.cpp.o.d -o CMakeFiles/mathLib.dir/math.cpp.o -c "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/02_CmakeProject/math.cpp"

CMakeFiles/mathLib.dir/math.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mathLib.dir/math.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/02_CmakeProject/math.cpp" > CMakeFiles/mathLib.dir/math.cpp.i

CMakeFiles/mathLib.dir/math.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mathLib.dir/math.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/02_CmakeProject/math.cpp" -o CMakeFiles/mathLib.dir/math.cpp.s

# Object files for target mathLib
mathLib_OBJECTS = \
"CMakeFiles/mathLib.dir/math.cpp.o"

# External object files for target mathLib
mathLib_EXTERNAL_OBJECTS =

libmathLib.a: CMakeFiles/mathLib.dir/math.cpp.o
libmathLib.a: CMakeFiles/mathLib.dir/build.make
libmathLib.a: CMakeFiles/mathLib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/02_CmakeProject/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libmathLib.a"
	$(CMAKE_COMMAND) -P CMakeFiles/mathLib.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mathLib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mathLib.dir/build: libmathLib.a
.PHONY : CMakeFiles/mathLib.dir/build

CMakeFiles/mathLib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mathLib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mathLib.dir/clean

CMakeFiles/mathLib.dir/depend:
	cd "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/02_CmakeProject/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/02_CmakeProject" "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/02_CmakeProject" "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/02_CmakeProject/build" "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/02_CmakeProject/build" "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/02_CmakeProject/build/CMakeFiles/mathLib.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/mathLib.dir/depend


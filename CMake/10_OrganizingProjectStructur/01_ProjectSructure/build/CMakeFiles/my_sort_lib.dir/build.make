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
CMAKE_SOURCE_DIR = "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/01_ProjectSructure"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/01_ProjectSructure/build"

# Include any dependencies generated for this target.
include CMakeFiles/my_sort_lib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/my_sort_lib.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/my_sort_lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/my_sort_lib.dir/flags.make

CMakeFiles/my_sort_lib.dir/sort.cpp.o: CMakeFiles/my_sort_lib.dir/flags.make
CMakeFiles/my_sort_lib.dir/sort.cpp.o: ../sort.cpp
CMakeFiles/my_sort_lib.dir/sort.cpp.o: CMakeFiles/my_sort_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/01_ProjectSructure/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/my_sort_lib.dir/sort.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/my_sort_lib.dir/sort.cpp.o -MF CMakeFiles/my_sort_lib.dir/sort.cpp.o.d -o CMakeFiles/my_sort_lib.dir/sort.cpp.o -c "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/01_ProjectSructure/sort.cpp"

CMakeFiles/my_sort_lib.dir/sort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_sort_lib.dir/sort.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/01_ProjectSructure/sort.cpp" > CMakeFiles/my_sort_lib.dir/sort.cpp.i

CMakeFiles/my_sort_lib.dir/sort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_sort_lib.dir/sort.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/01_ProjectSructure/sort.cpp" -o CMakeFiles/my_sort_lib.dir/sort.cpp.s

# Object files for target my_sort_lib
my_sort_lib_OBJECTS = \
"CMakeFiles/my_sort_lib.dir/sort.cpp.o"

# External object files for target my_sort_lib
my_sort_lib_EXTERNAL_OBJECTS =

libmy_sort_lib.a: CMakeFiles/my_sort_lib.dir/sort.cpp.o
libmy_sort_lib.a: CMakeFiles/my_sort_lib.dir/build.make
libmy_sort_lib.a: CMakeFiles/my_sort_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/01_ProjectSructure/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libmy_sort_lib.a"
	$(CMAKE_COMMAND) -P CMakeFiles/my_sort_lib.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/my_sort_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/my_sort_lib.dir/build: libmy_sort_lib.a
.PHONY : CMakeFiles/my_sort_lib.dir/build

CMakeFiles/my_sort_lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/my_sort_lib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/my_sort_lib.dir/clean

CMakeFiles/my_sort_lib.dir/depend:
	cd "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/01_ProjectSructure/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/01_ProjectSructure" "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/01_ProjectSructure" "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/01_ProjectSructure/build" "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/01_ProjectSructure/build" "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/01_ProjectSructure/build/CMakeFiles/my_sort_lib.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/my_sort_lib.dir/depend


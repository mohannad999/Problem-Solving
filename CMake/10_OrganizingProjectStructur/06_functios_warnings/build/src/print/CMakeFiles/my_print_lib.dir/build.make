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
CMAKE_SOURCE_DIR = "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/06_functios_warnings"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/06_functios_warnings/build"

# Include any dependencies generated for this target.
include src/print/CMakeFiles/my_print_lib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/print/CMakeFiles/my_print_lib.dir/compiler_depend.make

# Include the progress variables for this target.
include src/print/CMakeFiles/my_print_lib.dir/progress.make

# Include the compile flags for this target's objects.
include src/print/CMakeFiles/my_print_lib.dir/flags.make

src/print/CMakeFiles/my_print_lib.dir/print.cpp.o: src/print/CMakeFiles/my_print_lib.dir/flags.make
src/print/CMakeFiles/my_print_lib.dir/print.cpp.o: ../src/print/print.cpp
src/print/CMakeFiles/my_print_lib.dir/print.cpp.o: src/print/CMakeFiles/my_print_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/06_functios_warnings/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/print/CMakeFiles/my_print_lib.dir/print.cpp.o"
	cd "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/06_functios_warnings/build/src/print" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/print/CMakeFiles/my_print_lib.dir/print.cpp.o -MF CMakeFiles/my_print_lib.dir/print.cpp.o.d -o CMakeFiles/my_print_lib.dir/print.cpp.o -c "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/06_functios_warnings/src/print/print.cpp"

src/print/CMakeFiles/my_print_lib.dir/print.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_print_lib.dir/print.cpp.i"
	cd "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/06_functios_warnings/build/src/print" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/06_functios_warnings/src/print/print.cpp" > CMakeFiles/my_print_lib.dir/print.cpp.i

src/print/CMakeFiles/my_print_lib.dir/print.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_print_lib.dir/print.cpp.s"
	cd "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/06_functios_warnings/build/src/print" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/06_functios_warnings/src/print/print.cpp" -o CMakeFiles/my_print_lib.dir/print.cpp.s

# Object files for target my_print_lib
my_print_lib_OBJECTS = \
"CMakeFiles/my_print_lib.dir/print.cpp.o"

# External object files for target my_print_lib
my_print_lib_EXTERNAL_OBJECTS =

src/print/libmy_print_lib.a: src/print/CMakeFiles/my_print_lib.dir/print.cpp.o
src/print/libmy_print_lib.a: src/print/CMakeFiles/my_print_lib.dir/build.make
src/print/libmy_print_lib.a: src/print/CMakeFiles/my_print_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/06_functios_warnings/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libmy_print_lib.a"
	cd "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/06_functios_warnings/build/src/print" && $(CMAKE_COMMAND) -P CMakeFiles/my_print_lib.dir/cmake_clean_target.cmake
	cd "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/06_functios_warnings/build/src/print" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/my_print_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/print/CMakeFiles/my_print_lib.dir/build: src/print/libmy_print_lib.a
.PHONY : src/print/CMakeFiles/my_print_lib.dir/build

src/print/CMakeFiles/my_print_lib.dir/clean:
	cd "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/06_functios_warnings/build/src/print" && $(CMAKE_COMMAND) -P CMakeFiles/my_print_lib.dir/cmake_clean.cmake
.PHONY : src/print/CMakeFiles/my_print_lib.dir/clean

src/print/CMakeFiles/my_print_lib.dir/depend:
	cd "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/06_functios_warnings/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/06_functios_warnings" "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/06_functios_warnings/src/print" "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/06_functios_warnings/build" "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/06_functios_warnings/build/src/print" "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/06_functios_warnings/build/src/print/CMakeFiles/my_print_lib.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : src/print/CMakeFiles/my_print_lib.dir/depend


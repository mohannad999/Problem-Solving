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
CMAKE_SOURCE_DIR = "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/03_Sub_Folders"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/03_Sub_Folders/build"

# Include any dependencies generated for this target.
include print/CMakeFiles/my_print_lib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include print/CMakeFiles/my_print_lib.dir/compiler_depend.make

# Include the progress variables for this target.
include print/CMakeFiles/my_print_lib.dir/progress.make

# Include the compile flags for this target's objects.
include print/CMakeFiles/my_print_lib.dir/flags.make

print/CMakeFiles/my_print_lib.dir/print.cpp.o: print/CMakeFiles/my_print_lib.dir/flags.make
print/CMakeFiles/my_print_lib.dir/print.cpp.o: ../print/print.cpp
print/CMakeFiles/my_print_lib.dir/print.cpp.o: print/CMakeFiles/my_print_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/03_Sub_Folders/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object print/CMakeFiles/my_print_lib.dir/print.cpp.o"
	cd "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/03_Sub_Folders/build/print" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT print/CMakeFiles/my_print_lib.dir/print.cpp.o -MF CMakeFiles/my_print_lib.dir/print.cpp.o.d -o CMakeFiles/my_print_lib.dir/print.cpp.o -c "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/03_Sub_Folders/print/print.cpp"

print/CMakeFiles/my_print_lib.dir/print.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_print_lib.dir/print.cpp.i"
	cd "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/03_Sub_Folders/build/print" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/03_Sub_Folders/print/print.cpp" > CMakeFiles/my_print_lib.dir/print.cpp.i

print/CMakeFiles/my_print_lib.dir/print.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_print_lib.dir/print.cpp.s"
	cd "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/03_Sub_Folders/build/print" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/03_Sub_Folders/print/print.cpp" -o CMakeFiles/my_print_lib.dir/print.cpp.s

# Object files for target my_print_lib
my_print_lib_OBJECTS = \
"CMakeFiles/my_print_lib.dir/print.cpp.o"

# External object files for target my_print_lib
my_print_lib_EXTERNAL_OBJECTS =

print/libmy_print_lib.a: print/CMakeFiles/my_print_lib.dir/print.cpp.o
print/libmy_print_lib.a: print/CMakeFiles/my_print_lib.dir/build.make
print/libmy_print_lib.a: print/CMakeFiles/my_print_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/03_Sub_Folders/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libmy_print_lib.a"
	cd "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/03_Sub_Folders/build/print" && $(CMAKE_COMMAND) -P CMakeFiles/my_print_lib.dir/cmake_clean_target.cmake
	cd "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/03_Sub_Folders/build/print" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/my_print_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
print/CMakeFiles/my_print_lib.dir/build: print/libmy_print_lib.a
.PHONY : print/CMakeFiles/my_print_lib.dir/build

print/CMakeFiles/my_print_lib.dir/clean:
	cd "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/03_Sub_Folders/build/print" && $(CMAKE_COMMAND) -P CMakeFiles/my_print_lib.dir/cmake_clean.cmake
.PHONY : print/CMakeFiles/my_print_lib.dir/clean

print/CMakeFiles/my_print_lib.dir/depend:
	cd "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/03_Sub_Folders/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/03_Sub_Folders" "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/03_Sub_Folders/print" "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/03_Sub_Folders/build" "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/03_Sub_Folders/build/print" "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/03_Sub_Folders/build/print/CMakeFiles/my_print_lib.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : print/CMakeFiles/my_print_lib.dir/depend


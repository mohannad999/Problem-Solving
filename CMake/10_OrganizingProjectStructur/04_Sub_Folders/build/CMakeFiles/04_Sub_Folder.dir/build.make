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
CMAKE_SOURCE_DIR = "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/04_Sub_Folders"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/04_Sub_Folders/build"

# Include any dependencies generated for this target.
include CMakeFiles/04_Sub_Folder.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/04_Sub_Folder.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/04_Sub_Folder.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/04_Sub_Folder.dir/flags.make

CMakeFiles/04_Sub_Folder.dir/main.cpp.o: CMakeFiles/04_Sub_Folder.dir/flags.make
CMakeFiles/04_Sub_Folder.dir/main.cpp.o: ../main.cpp
CMakeFiles/04_Sub_Folder.dir/main.cpp.o: CMakeFiles/04_Sub_Folder.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/04_Sub_Folders/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/04_Sub_Folder.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/04_Sub_Folder.dir/main.cpp.o -MF CMakeFiles/04_Sub_Folder.dir/main.cpp.o.d -o CMakeFiles/04_Sub_Folder.dir/main.cpp.o -c "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/04_Sub_Folders/main.cpp"

CMakeFiles/04_Sub_Folder.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/04_Sub_Folder.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/04_Sub_Folders/main.cpp" > CMakeFiles/04_Sub_Folder.dir/main.cpp.i

CMakeFiles/04_Sub_Folder.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/04_Sub_Folder.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/04_Sub_Folders/main.cpp" -o CMakeFiles/04_Sub_Folder.dir/main.cpp.s

# Object files for target 04_Sub_Folder
04_Sub_Folder_OBJECTS = \
"CMakeFiles/04_Sub_Folder.dir/main.cpp.o"

# External object files for target 04_Sub_Folder
04_Sub_Folder_EXTERNAL_OBJECTS =

04_Sub_Folder: CMakeFiles/04_Sub_Folder.dir/main.cpp.o
04_Sub_Folder: CMakeFiles/04_Sub_Folder.dir/build.make
04_Sub_Folder: src/sort/libmy_sort_lib.a
04_Sub_Folder: src/print/libmy_print_lib.a
04_Sub_Folder: CMakeFiles/04_Sub_Folder.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/04_Sub_Folders/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 04_Sub_Folder"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/04_Sub_Folder.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/04_Sub_Folder.dir/build: 04_Sub_Folder
.PHONY : CMakeFiles/04_Sub_Folder.dir/build

CMakeFiles/04_Sub_Folder.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/04_Sub_Folder.dir/cmake_clean.cmake
.PHONY : CMakeFiles/04_Sub_Folder.dir/clean

CMakeFiles/04_Sub_Folder.dir/depend:
	cd "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/04_Sub_Folders/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/04_Sub_Folders" "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/04_Sub_Folders" "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/04_Sub_Folders/build" "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/04_Sub_Folders/build" "/media/mohannad/New Volume/Embedded Linux/Learn Programing/Problem-Solving/CMake/10_OrganizingProjectStructur/04_Sub_Folders/build/CMakeFiles/04_Sub_Folder.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/04_Sub_Folder.dir/depend


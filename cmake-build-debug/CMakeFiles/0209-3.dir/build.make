# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\project\C

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\project\C\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/0209-3.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/0209-3.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/0209-3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/0209-3.dir/flags.make

CMakeFiles/0209-3.dir/day09/0209-3.c.obj: CMakeFiles/0209-3.dir/flags.make
CMakeFiles/0209-3.dir/day09/0209-3.c.obj: ../day09/0209-3.c
CMakeFiles/0209-3.dir/day09/0209-3.c.obj: CMakeFiles/0209-3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\project\C\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/0209-3.dir/day09/0209-3.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/0209-3.dir/day09/0209-3.c.obj -MF CMakeFiles\0209-3.dir\day09\0209-3.c.obj.d -o CMakeFiles\0209-3.dir\day09\0209-3.c.obj -c C:\project\C\day09\0209-3.c

CMakeFiles/0209-3.dir/day09/0209-3.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/0209-3.dir/day09/0209-3.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\project\C\day09\0209-3.c > CMakeFiles\0209-3.dir\day09\0209-3.c.i

CMakeFiles/0209-3.dir/day09/0209-3.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/0209-3.dir/day09/0209-3.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\project\C\day09\0209-3.c -o CMakeFiles\0209-3.dir\day09\0209-3.c.s

# Object files for target 0209-3
0209__3_OBJECTS = \
"CMakeFiles/0209-3.dir/day09/0209-3.c.obj"

# External object files for target 0209-3
0209__3_EXTERNAL_OBJECTS =

0209-3.exe: CMakeFiles/0209-3.dir/day09/0209-3.c.obj
0209-3.exe: CMakeFiles/0209-3.dir/build.make
0209-3.exe: CMakeFiles/0209-3.dir/linklibs.rsp
0209-3.exe: CMakeFiles/0209-3.dir/objects1.rsp
0209-3.exe: CMakeFiles/0209-3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\project\C\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 0209-3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\0209-3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/0209-3.dir/build: 0209-3.exe
.PHONY : CMakeFiles/0209-3.dir/build

CMakeFiles/0209-3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\0209-3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/0209-3.dir/clean

CMakeFiles/0209-3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\project\C C:\project\C C:\project\C\cmake-build-debug C:\project\C\cmake-build-debug C:\project\C\cmake-build-debug\CMakeFiles\0209-3.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/0209-3.dir/depend

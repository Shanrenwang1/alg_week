# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\fengl\CLionProjects\alg_week

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\fengl\CLionProjects\alg_week\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/alg_week.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/alg_week.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/alg_week.dir/flags.make

CMakeFiles/alg_week.dir/main.cpp.obj: CMakeFiles/alg_week.dir/flags.make
CMakeFiles/alg_week.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\fengl\CLionProjects\alg_week\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/alg_week.dir/main.cpp.obj"
	C:\Users\fengl\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\alg_week.dir\main.cpp.obj -c C:\Users\fengl\CLionProjects\alg_week\main.cpp

CMakeFiles/alg_week.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/alg_week.dir/main.cpp.i"
	C:\Users\fengl\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\fengl\CLionProjects\alg_week\main.cpp > CMakeFiles\alg_week.dir\main.cpp.i

CMakeFiles/alg_week.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/alg_week.dir/main.cpp.s"
	C:\Users\fengl\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\fengl\CLionProjects\alg_week\main.cpp -o CMakeFiles\alg_week.dir\main.cpp.s

# Object files for target alg_week
alg_week_OBJECTS = \
"CMakeFiles/alg_week.dir/main.cpp.obj"

# External object files for target alg_week
alg_week_EXTERNAL_OBJECTS =

alg_week.exe: CMakeFiles/alg_week.dir/main.cpp.obj
alg_week.exe: CMakeFiles/alg_week.dir/build.make
alg_week.exe: CMakeFiles/alg_week.dir/linklibs.rsp
alg_week.exe: CMakeFiles/alg_week.dir/objects1.rsp
alg_week.exe: CMakeFiles/alg_week.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\fengl\CLionProjects\alg_week\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable alg_week.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\alg_week.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/alg_week.dir/build: alg_week.exe

.PHONY : CMakeFiles/alg_week.dir/build

CMakeFiles/alg_week.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\alg_week.dir\cmake_clean.cmake
.PHONY : CMakeFiles/alg_week.dir/clean

CMakeFiles/alg_week.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\fengl\CLionProjects\alg_week C:\Users\fengl\CLionProjects\alg_week C:\Users\fengl\CLionProjects\alg_week\cmake-build-debug C:\Users\fengl\CLionProjects\alg_week\cmake-build-debug C:\Users\fengl\CLionProjects\alg_week\cmake-build-debug\CMakeFiles\alg_week.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/alg_week.dir/depend


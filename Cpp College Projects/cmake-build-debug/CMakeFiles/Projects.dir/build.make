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
CMAKE_COMMAND = "C:\Users\Jorge Eldis\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\202.7660.37\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Users\Jorge Eldis\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\202.7660.37\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\MyStuff\Coding\C++\Projects

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\MyStuff\Coding\C++\Projects\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Projects.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Projects.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Projects.dir/flags.make

CMakeFiles/Projects.dir/juego_matematico.cpp.obj: CMakeFiles/Projects.dir/flags.make
CMakeFiles/Projects.dir/juego_matematico.cpp.obj: ../juego_matematico.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\MyStuff\Coding\C++\Projects\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Projects.dir/juego_matematico.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Projects.dir\juego_matematico.cpp.obj -c C:\MyStuff\Coding\C++\Projects\juego_matematico.cpp

CMakeFiles/Projects.dir/juego_matematico.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Projects.dir/juego_matematico.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\MyStuff\Coding\C++\Projects\juego_matematico.cpp > CMakeFiles\Projects.dir\juego_matematico.cpp.i

CMakeFiles/Projects.dir/juego_matematico.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Projects.dir/juego_matematico.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\MyStuff\Coding\C++\Projects\juego_matematico.cpp -o CMakeFiles\Projects.dir\juego_matematico.cpp.s

CMakeFiles/Projects.dir/tempCodeRunnerFile.cpp.obj: CMakeFiles/Projects.dir/flags.make
CMakeFiles/Projects.dir/tempCodeRunnerFile.cpp.obj: ../tempCodeRunnerFile.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\MyStuff\Coding\C++\Projects\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Projects.dir/tempCodeRunnerFile.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Projects.dir\tempCodeRunnerFile.cpp.obj -c C:\MyStuff\Coding\C++\Projects\tempCodeRunnerFile.cpp

CMakeFiles/Projects.dir/tempCodeRunnerFile.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Projects.dir/tempCodeRunnerFile.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\MyStuff\Coding\C++\Projects\tempCodeRunnerFile.cpp > CMakeFiles\Projects.dir\tempCodeRunnerFile.cpp.i

CMakeFiles/Projects.dir/tempCodeRunnerFile.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Projects.dir/tempCodeRunnerFile.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\MyStuff\Coding\C++\Projects\tempCodeRunnerFile.cpp -o CMakeFiles\Projects.dir\tempCodeRunnerFile.cpp.s

# Object files for target Projects
Projects_OBJECTS = \
"CMakeFiles/Projects.dir/juego_matematico.cpp.obj" \
"CMakeFiles/Projects.dir/tempCodeRunnerFile.cpp.obj"

# External object files for target Projects
Projects_EXTERNAL_OBJECTS =

Projects.exe: CMakeFiles/Projects.dir/juego_matematico.cpp.obj
Projects.exe: CMakeFiles/Projects.dir/tempCodeRunnerFile.cpp.obj
Projects.exe: CMakeFiles/Projects.dir/build.make
Projects.exe: CMakeFiles/Projects.dir/linklibs.rsp
Projects.exe: CMakeFiles/Projects.dir/objects1.rsp
Projects.exe: CMakeFiles/Projects.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\MyStuff\Coding\C++\Projects\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Projects.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Projects.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Projects.dir/build: Projects.exe

.PHONY : CMakeFiles/Projects.dir/build

CMakeFiles/Projects.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Projects.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Projects.dir/clean

CMakeFiles/Projects.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\MyStuff\Coding\C++\Projects C:\MyStuff\Coding\C++\Projects C:\MyStuff\Coding\C++\Projects\cmake-build-debug C:\MyStuff\Coding\C++\Projects\cmake-build-debug C:\MyStuff\Coding\C++\Projects\cmake-build-debug\CMakeFiles\Projects.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Projects.dir/depend


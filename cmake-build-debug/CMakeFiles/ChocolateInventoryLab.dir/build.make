# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/sogent/CLionProjects/ChocolateInventoryLab

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/sogent/CLionProjects/ChocolateInventoryLab/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ChocolateInventoryLab.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/ChocolateInventoryLab.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ChocolateInventoryLab.dir/flags.make

CMakeFiles/ChocolateInventoryLab.dir/main.cpp.o: CMakeFiles/ChocolateInventoryLab.dir/flags.make
CMakeFiles/ChocolateInventoryLab.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sogent/CLionProjects/ChocolateInventoryLab/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ChocolateInventoryLab.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ChocolateInventoryLab.dir/main.cpp.o -c /Users/sogent/CLionProjects/ChocolateInventoryLab/main.cpp

CMakeFiles/ChocolateInventoryLab.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ChocolateInventoryLab.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sogent/CLionProjects/ChocolateInventoryLab/main.cpp > CMakeFiles/ChocolateInventoryLab.dir/main.cpp.i

CMakeFiles/ChocolateInventoryLab.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ChocolateInventoryLab.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sogent/CLionProjects/ChocolateInventoryLab/main.cpp -o CMakeFiles/ChocolateInventoryLab.dir/main.cpp.s

CMakeFiles/ChocolateInventoryLab.dir/ChocolateInventoryModules.cpp.o: CMakeFiles/ChocolateInventoryLab.dir/flags.make
CMakeFiles/ChocolateInventoryLab.dir/ChocolateInventoryModules.cpp.o: ../ChocolateInventoryModules.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sogent/CLionProjects/ChocolateInventoryLab/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ChocolateInventoryLab.dir/ChocolateInventoryModules.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ChocolateInventoryLab.dir/ChocolateInventoryModules.cpp.o -c /Users/sogent/CLionProjects/ChocolateInventoryLab/ChocolateInventoryModules.cpp

CMakeFiles/ChocolateInventoryLab.dir/ChocolateInventoryModules.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ChocolateInventoryLab.dir/ChocolateInventoryModules.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sogent/CLionProjects/ChocolateInventoryLab/ChocolateInventoryModules.cpp > CMakeFiles/ChocolateInventoryLab.dir/ChocolateInventoryModules.cpp.i

CMakeFiles/ChocolateInventoryLab.dir/ChocolateInventoryModules.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ChocolateInventoryLab.dir/ChocolateInventoryModules.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sogent/CLionProjects/ChocolateInventoryLab/ChocolateInventoryModules.cpp -o CMakeFiles/ChocolateInventoryLab.dir/ChocolateInventoryModules.cpp.s

# Object files for target ChocolateInventoryLab
ChocolateInventoryLab_OBJECTS = \
"CMakeFiles/ChocolateInventoryLab.dir/main.cpp.o" \
"CMakeFiles/ChocolateInventoryLab.dir/ChocolateInventoryModules.cpp.o"

# External object files for target ChocolateInventoryLab
ChocolateInventoryLab_EXTERNAL_OBJECTS =

ChocolateInventoryLab: CMakeFiles/ChocolateInventoryLab.dir/main.cpp.o
ChocolateInventoryLab: CMakeFiles/ChocolateInventoryLab.dir/ChocolateInventoryModules.cpp.o
ChocolateInventoryLab: CMakeFiles/ChocolateInventoryLab.dir/build.make
ChocolateInventoryLab: CMakeFiles/ChocolateInventoryLab.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/sogent/CLionProjects/ChocolateInventoryLab/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ChocolateInventoryLab"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ChocolateInventoryLab.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ChocolateInventoryLab.dir/build: ChocolateInventoryLab
.PHONY : CMakeFiles/ChocolateInventoryLab.dir/build

CMakeFiles/ChocolateInventoryLab.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ChocolateInventoryLab.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ChocolateInventoryLab.dir/clean

CMakeFiles/ChocolateInventoryLab.dir/depend:
	cd /Users/sogent/CLionProjects/ChocolateInventoryLab/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sogent/CLionProjects/ChocolateInventoryLab /Users/sogent/CLionProjects/ChocolateInventoryLab /Users/sogent/CLionProjects/ChocolateInventoryLab/cmake-build-debug /Users/sogent/CLionProjects/ChocolateInventoryLab/cmake-build-debug /Users/sogent/CLionProjects/ChocolateInventoryLab/cmake-build-debug/CMakeFiles/ChocolateInventoryLab.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ChocolateInventoryLab.dir/depend


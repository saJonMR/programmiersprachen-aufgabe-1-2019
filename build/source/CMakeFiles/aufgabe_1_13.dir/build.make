# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/datboi/GitHub/programmiersprachen-aufgabe-1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/datboi/GitHub/programmiersprachen-aufgabe-1/build

# Include any dependencies generated for this target.
include source/CMakeFiles/aufgabe_1_13.dir/depend.make

# Include the progress variables for this target.
include source/CMakeFiles/aufgabe_1_13.dir/progress.make

# Include the compile flags for this target's objects.
include source/CMakeFiles/aufgabe_1_13.dir/flags.make

source/CMakeFiles/aufgabe_1_13.dir/aufgabe_1.13.cpp.o: source/CMakeFiles/aufgabe_1_13.dir/flags.make
source/CMakeFiles/aufgabe_1_13.dir/aufgabe_1.13.cpp.o: ../source/aufgabe_1.13.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/datboi/GitHub/programmiersprachen-aufgabe-1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object source/CMakeFiles/aufgabe_1_13.dir/aufgabe_1.13.cpp.o"
	cd /Users/datboi/GitHub/programmiersprachen-aufgabe-1/build/source && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/aufgabe_1_13.dir/aufgabe_1.13.cpp.o -c /Users/datboi/GitHub/programmiersprachen-aufgabe-1/source/aufgabe_1.13.cpp

source/CMakeFiles/aufgabe_1_13.dir/aufgabe_1.13.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/aufgabe_1_13.dir/aufgabe_1.13.cpp.i"
	cd /Users/datboi/GitHub/programmiersprachen-aufgabe-1/build/source && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/datboi/GitHub/programmiersprachen-aufgabe-1/source/aufgabe_1.13.cpp > CMakeFiles/aufgabe_1_13.dir/aufgabe_1.13.cpp.i

source/CMakeFiles/aufgabe_1_13.dir/aufgabe_1.13.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/aufgabe_1_13.dir/aufgabe_1.13.cpp.s"
	cd /Users/datboi/GitHub/programmiersprachen-aufgabe-1/build/source && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/datboi/GitHub/programmiersprachen-aufgabe-1/source/aufgabe_1.13.cpp -o CMakeFiles/aufgabe_1_13.dir/aufgabe_1.13.cpp.s

# Object files for target aufgabe_1_13
aufgabe_1_13_OBJECTS = \
"CMakeFiles/aufgabe_1_13.dir/aufgabe_1.13.cpp.o"

# External object files for target aufgabe_1_13
aufgabe_1_13_EXTERNAL_OBJECTS =

source/aufgabe_1_13: source/CMakeFiles/aufgabe_1_13.dir/aufgabe_1.13.cpp.o
source/aufgabe_1_13: source/CMakeFiles/aufgabe_1_13.dir/build.make
source/aufgabe_1_13: source/CMakeFiles/aufgabe_1_13.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/datboi/GitHub/programmiersprachen-aufgabe-1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable aufgabe_1_13"
	cd /Users/datboi/GitHub/programmiersprachen-aufgabe-1/build/source && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/aufgabe_1_13.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/CMakeFiles/aufgabe_1_13.dir/build: source/aufgabe_1_13

.PHONY : source/CMakeFiles/aufgabe_1_13.dir/build

source/CMakeFiles/aufgabe_1_13.dir/clean:
	cd /Users/datboi/GitHub/programmiersprachen-aufgabe-1/build/source && $(CMAKE_COMMAND) -P CMakeFiles/aufgabe_1_13.dir/cmake_clean.cmake
.PHONY : source/CMakeFiles/aufgabe_1_13.dir/clean

source/CMakeFiles/aufgabe_1_13.dir/depend:
	cd /Users/datboi/GitHub/programmiersprachen-aufgabe-1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/datboi/GitHub/programmiersprachen-aufgabe-1 /Users/datboi/GitHub/programmiersprachen-aufgabe-1/source /Users/datboi/GitHub/programmiersprachen-aufgabe-1/build /Users/datboi/GitHub/programmiersprachen-aufgabe-1/build/source /Users/datboi/GitHub/programmiersprachen-aufgabe-1/build/source/CMakeFiles/aufgabe_1_13.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/CMakeFiles/aufgabe_1_13.dir/depend


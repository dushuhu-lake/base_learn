# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/89674/CLionProjects/test/base_learn

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/89674/CLionProjects/test/base_learn/cmake-build-debug-wsl

# Include any dependencies generated for this target.
include CMakeFiles/base_learn.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/base_learn.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/base_learn.dir/flags.make

CMakeFiles/base_learn.dir/main.cpp.o: CMakeFiles/base_learn.dir/flags.make
CMakeFiles/base_learn.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/89674/CLionProjects/test/base_learn/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/base_learn.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/base_learn.dir/main.cpp.o -c /mnt/c/Users/89674/CLionProjects/test/base_learn/main.cpp

CMakeFiles/base_learn.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/base_learn.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/89674/CLionProjects/test/base_learn/main.cpp > CMakeFiles/base_learn.dir/main.cpp.i

CMakeFiles/base_learn.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/base_learn.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/89674/CLionProjects/test/base_learn/main.cpp -o CMakeFiles/base_learn.dir/main.cpp.s

CMakeFiles/base_learn.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/base_learn.dir/main.cpp.o.requires

CMakeFiles/base_learn.dir/main.cpp.o.provides: CMakeFiles/base_learn.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/base_learn.dir/build.make CMakeFiles/base_learn.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/base_learn.dir/main.cpp.o.provides

CMakeFiles/base_learn.dir/main.cpp.o.provides.build: CMakeFiles/base_learn.dir/main.cpp.o


CMakeFiles/base_learn.dir/myArray/myArray.cpp.o: CMakeFiles/base_learn.dir/flags.make
CMakeFiles/base_learn.dir/myArray/myArray.cpp.o: ../myArray/myArray.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/89674/CLionProjects/test/base_learn/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/base_learn.dir/myArray/myArray.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/base_learn.dir/myArray/myArray.cpp.o -c /mnt/c/Users/89674/CLionProjects/test/base_learn/myArray/myArray.cpp

CMakeFiles/base_learn.dir/myArray/myArray.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/base_learn.dir/myArray/myArray.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/89674/CLionProjects/test/base_learn/myArray/myArray.cpp > CMakeFiles/base_learn.dir/myArray/myArray.cpp.i

CMakeFiles/base_learn.dir/myArray/myArray.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/base_learn.dir/myArray/myArray.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/89674/CLionProjects/test/base_learn/myArray/myArray.cpp -o CMakeFiles/base_learn.dir/myArray/myArray.cpp.s

CMakeFiles/base_learn.dir/myArray/myArray.cpp.o.requires:

.PHONY : CMakeFiles/base_learn.dir/myArray/myArray.cpp.o.requires

CMakeFiles/base_learn.dir/myArray/myArray.cpp.o.provides: CMakeFiles/base_learn.dir/myArray/myArray.cpp.o.requires
	$(MAKE) -f CMakeFiles/base_learn.dir/build.make CMakeFiles/base_learn.dir/myArray/myArray.cpp.o.provides.build
.PHONY : CMakeFiles/base_learn.dir/myArray/myArray.cpp.o.provides

CMakeFiles/base_learn.dir/myArray/myArray.cpp.o.provides.build: CMakeFiles/base_learn.dir/myArray/myArray.cpp.o


CMakeFiles/base_learn.dir/templateTest/templateTest.cpp.o: CMakeFiles/base_learn.dir/flags.make
CMakeFiles/base_learn.dir/templateTest/templateTest.cpp.o: ../templateTest/templateTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/89674/CLionProjects/test/base_learn/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/base_learn.dir/templateTest/templateTest.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/base_learn.dir/templateTest/templateTest.cpp.o -c /mnt/c/Users/89674/CLionProjects/test/base_learn/templateTest/templateTest.cpp

CMakeFiles/base_learn.dir/templateTest/templateTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/base_learn.dir/templateTest/templateTest.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/89674/CLionProjects/test/base_learn/templateTest/templateTest.cpp > CMakeFiles/base_learn.dir/templateTest/templateTest.cpp.i

CMakeFiles/base_learn.dir/templateTest/templateTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/base_learn.dir/templateTest/templateTest.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/89674/CLionProjects/test/base_learn/templateTest/templateTest.cpp -o CMakeFiles/base_learn.dir/templateTest/templateTest.cpp.s

CMakeFiles/base_learn.dir/templateTest/templateTest.cpp.o.requires:

.PHONY : CMakeFiles/base_learn.dir/templateTest/templateTest.cpp.o.requires

CMakeFiles/base_learn.dir/templateTest/templateTest.cpp.o.provides: CMakeFiles/base_learn.dir/templateTest/templateTest.cpp.o.requires
	$(MAKE) -f CMakeFiles/base_learn.dir/build.make CMakeFiles/base_learn.dir/templateTest/templateTest.cpp.o.provides.build
.PHONY : CMakeFiles/base_learn.dir/templateTest/templateTest.cpp.o.provides

CMakeFiles/base_learn.dir/templateTest/templateTest.cpp.o.provides.build: CMakeFiles/base_learn.dir/templateTest/templateTest.cpp.o


CMakeFiles/base_learn.dir/mystring/mystring.cpp.o: CMakeFiles/base_learn.dir/flags.make
CMakeFiles/base_learn.dir/mystring/mystring.cpp.o: ../mystring/mystring.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/89674/CLionProjects/test/base_learn/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/base_learn.dir/mystring/mystring.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/base_learn.dir/mystring/mystring.cpp.o -c /mnt/c/Users/89674/CLionProjects/test/base_learn/mystring/mystring.cpp

CMakeFiles/base_learn.dir/mystring/mystring.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/base_learn.dir/mystring/mystring.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/89674/CLionProjects/test/base_learn/mystring/mystring.cpp > CMakeFiles/base_learn.dir/mystring/mystring.cpp.i

CMakeFiles/base_learn.dir/mystring/mystring.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/base_learn.dir/mystring/mystring.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/89674/CLionProjects/test/base_learn/mystring/mystring.cpp -o CMakeFiles/base_learn.dir/mystring/mystring.cpp.s

CMakeFiles/base_learn.dir/mystring/mystring.cpp.o.requires:

.PHONY : CMakeFiles/base_learn.dir/mystring/mystring.cpp.o.requires

CMakeFiles/base_learn.dir/mystring/mystring.cpp.o.provides: CMakeFiles/base_learn.dir/mystring/mystring.cpp.o.requires
	$(MAKE) -f CMakeFiles/base_learn.dir/build.make CMakeFiles/base_learn.dir/mystring/mystring.cpp.o.provides.build
.PHONY : CMakeFiles/base_learn.dir/mystring/mystring.cpp.o.provides

CMakeFiles/base_learn.dir/mystring/mystring.cpp.o.provides.build: CMakeFiles/base_learn.dir/mystring/mystring.cpp.o


# Object files for target base_learn
base_learn_OBJECTS = \
"CMakeFiles/base_learn.dir/main.cpp.o" \
"CMakeFiles/base_learn.dir/myArray/myArray.cpp.o" \
"CMakeFiles/base_learn.dir/templateTest/templateTest.cpp.o" \
"CMakeFiles/base_learn.dir/mystring/mystring.cpp.o"

# External object files for target base_learn
base_learn_EXTERNAL_OBJECTS =

base_learn: CMakeFiles/base_learn.dir/main.cpp.o
base_learn: CMakeFiles/base_learn.dir/myArray/myArray.cpp.o
base_learn: CMakeFiles/base_learn.dir/templateTest/templateTest.cpp.o
base_learn: CMakeFiles/base_learn.dir/mystring/mystring.cpp.o
base_learn: CMakeFiles/base_learn.dir/build.make
base_learn: CMakeFiles/base_learn.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/89674/CLionProjects/test/base_learn/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable base_learn"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/base_learn.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/base_learn.dir/build: base_learn

.PHONY : CMakeFiles/base_learn.dir/build

CMakeFiles/base_learn.dir/requires: CMakeFiles/base_learn.dir/main.cpp.o.requires
CMakeFiles/base_learn.dir/requires: CMakeFiles/base_learn.dir/myArray/myArray.cpp.o.requires
CMakeFiles/base_learn.dir/requires: CMakeFiles/base_learn.dir/templateTest/templateTest.cpp.o.requires
CMakeFiles/base_learn.dir/requires: CMakeFiles/base_learn.dir/mystring/mystring.cpp.o.requires

.PHONY : CMakeFiles/base_learn.dir/requires

CMakeFiles/base_learn.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/base_learn.dir/cmake_clean.cmake
.PHONY : CMakeFiles/base_learn.dir/clean

CMakeFiles/base_learn.dir/depend:
	cd /mnt/c/Users/89674/CLionProjects/test/base_learn/cmake-build-debug-wsl && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/89674/CLionProjects/test/base_learn /mnt/c/Users/89674/CLionProjects/test/base_learn /mnt/c/Users/89674/CLionProjects/test/base_learn/cmake-build-debug-wsl /mnt/c/Users/89674/CLionProjects/test/base_learn/cmake-build-debug-wsl /mnt/c/Users/89674/CLionProjects/test/base_learn/cmake-build-debug-wsl/CMakeFiles/base_learn.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/base_learn.dir/depend


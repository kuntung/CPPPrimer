# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/xiaotang/GitHub/CPPPrimer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xiaotang/GitHub/CPPPrimer/build/debug

# Include any dependencies generated for this target.
include testSrc/ch01/CMakeFiles/test1.4.1.dir/depend.make

# Include the progress variables for this target.
include testSrc/ch01/CMakeFiles/test1.4.1.dir/progress.make

# Include the compile flags for this target's objects.
include testSrc/ch01/CMakeFiles/test1.4.1.dir/flags.make

testSrc/ch01/CMakeFiles/test1.4.1.dir/test1.4.1.cpp.o: testSrc/ch01/CMakeFiles/test1.4.1.dir/flags.make
testSrc/ch01/CMakeFiles/test1.4.1.dir/test1.4.1.cpp.o: ../../testSrc/ch01/test1.4.1.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/xiaotang/GitHub/CPPPrimer/build/debug/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object testSrc/ch01/CMakeFiles/test1.4.1.dir/test1.4.1.cpp.o"
	cd /home/xiaotang/GitHub/CPPPrimer/build/debug/testSrc/ch01 && g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/test1.4.1.dir/test1.4.1.cpp.o -c /home/xiaotang/GitHub/CPPPrimer/testSrc/ch01/test1.4.1.cpp

testSrc/ch01/CMakeFiles/test1.4.1.dir/test1.4.1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test1.4.1.dir/test1.4.1.cpp.i"
	cd /home/xiaotang/GitHub/CPPPrimer/build/debug/testSrc/ch01 && g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/xiaotang/GitHub/CPPPrimer/testSrc/ch01/test1.4.1.cpp > CMakeFiles/test1.4.1.dir/test1.4.1.cpp.i

testSrc/ch01/CMakeFiles/test1.4.1.dir/test1.4.1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test1.4.1.dir/test1.4.1.cpp.s"
	cd /home/xiaotang/GitHub/CPPPrimer/build/debug/testSrc/ch01 && g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/xiaotang/GitHub/CPPPrimer/testSrc/ch01/test1.4.1.cpp -o CMakeFiles/test1.4.1.dir/test1.4.1.cpp.s

testSrc/ch01/CMakeFiles/test1.4.1.dir/test1.4.1.cpp.o.requires:
.PHONY : testSrc/ch01/CMakeFiles/test1.4.1.dir/test1.4.1.cpp.o.requires

testSrc/ch01/CMakeFiles/test1.4.1.dir/test1.4.1.cpp.o.provides: testSrc/ch01/CMakeFiles/test1.4.1.dir/test1.4.1.cpp.o.requires
	$(MAKE) -f testSrc/ch01/CMakeFiles/test1.4.1.dir/build.make testSrc/ch01/CMakeFiles/test1.4.1.dir/test1.4.1.cpp.o.provides.build
.PHONY : testSrc/ch01/CMakeFiles/test1.4.1.dir/test1.4.1.cpp.o.provides

testSrc/ch01/CMakeFiles/test1.4.1.dir/test1.4.1.cpp.o.provides.build: testSrc/ch01/CMakeFiles/test1.4.1.dir/test1.4.1.cpp.o

# Object files for target test1.4.1
test1_4_1_OBJECTS = \
"CMakeFiles/test1.4.1.dir/test1.4.1.cpp.o"

# External object files for target test1.4.1
test1_4_1_EXTERNAL_OBJECTS =

bin/test1.4.1: testSrc/ch01/CMakeFiles/test1.4.1.dir/test1.4.1.cpp.o
bin/test1.4.1: testSrc/ch01/CMakeFiles/test1.4.1.dir/build.make
bin/test1.4.1: testSrc/ch01/CMakeFiles/test1.4.1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/test1.4.1"
	cd /home/xiaotang/GitHub/CPPPrimer/build/debug/testSrc/ch01 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test1.4.1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
testSrc/ch01/CMakeFiles/test1.4.1.dir/build: bin/test1.4.1
.PHONY : testSrc/ch01/CMakeFiles/test1.4.1.dir/build

testSrc/ch01/CMakeFiles/test1.4.1.dir/requires: testSrc/ch01/CMakeFiles/test1.4.1.dir/test1.4.1.cpp.o.requires
.PHONY : testSrc/ch01/CMakeFiles/test1.4.1.dir/requires

testSrc/ch01/CMakeFiles/test1.4.1.dir/clean:
	cd /home/xiaotang/GitHub/CPPPrimer/build/debug/testSrc/ch01 && $(CMAKE_COMMAND) -P CMakeFiles/test1.4.1.dir/cmake_clean.cmake
.PHONY : testSrc/ch01/CMakeFiles/test1.4.1.dir/clean

testSrc/ch01/CMakeFiles/test1.4.1.dir/depend:
	cd /home/xiaotang/GitHub/CPPPrimer/build/debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xiaotang/GitHub/CPPPrimer /home/xiaotang/GitHub/CPPPrimer/testSrc/ch01 /home/xiaotang/GitHub/CPPPrimer/build/debug /home/xiaotang/GitHub/CPPPrimer/build/debug/testSrc/ch01 /home/xiaotang/GitHub/CPPPrimer/build/debug/testSrc/ch01/CMakeFiles/test1.4.1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : testSrc/ch01/CMakeFiles/test1.4.1.dir/depend


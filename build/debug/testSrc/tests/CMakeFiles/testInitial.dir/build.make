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
include testSrc/tests/CMakeFiles/testInitial.dir/depend.make

# Include the progress variables for this target.
include testSrc/tests/CMakeFiles/testInitial.dir/progress.make

# Include the compile flags for this target's objects.
include testSrc/tests/CMakeFiles/testInitial.dir/flags.make

testSrc/tests/CMakeFiles/testInitial.dir/testInitial.cpp.o: testSrc/tests/CMakeFiles/testInitial.dir/flags.make
testSrc/tests/CMakeFiles/testInitial.dir/testInitial.cpp.o: ../../testSrc/tests/testInitial.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/xiaotang/GitHub/CPPPrimer/build/debug/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object testSrc/tests/CMakeFiles/testInitial.dir/testInitial.cpp.o"
	cd /home/xiaotang/GitHub/CPPPrimer/build/debug/testSrc/tests && g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/testInitial.dir/testInitial.cpp.o -c /home/xiaotang/GitHub/CPPPrimer/testSrc/tests/testInitial.cpp

testSrc/tests/CMakeFiles/testInitial.dir/testInitial.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testInitial.dir/testInitial.cpp.i"
	cd /home/xiaotang/GitHub/CPPPrimer/build/debug/testSrc/tests && g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/xiaotang/GitHub/CPPPrimer/testSrc/tests/testInitial.cpp > CMakeFiles/testInitial.dir/testInitial.cpp.i

testSrc/tests/CMakeFiles/testInitial.dir/testInitial.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testInitial.dir/testInitial.cpp.s"
	cd /home/xiaotang/GitHub/CPPPrimer/build/debug/testSrc/tests && g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/xiaotang/GitHub/CPPPrimer/testSrc/tests/testInitial.cpp -o CMakeFiles/testInitial.dir/testInitial.cpp.s

testSrc/tests/CMakeFiles/testInitial.dir/testInitial.cpp.o.requires:
.PHONY : testSrc/tests/CMakeFiles/testInitial.dir/testInitial.cpp.o.requires

testSrc/tests/CMakeFiles/testInitial.dir/testInitial.cpp.o.provides: testSrc/tests/CMakeFiles/testInitial.dir/testInitial.cpp.o.requires
	$(MAKE) -f testSrc/tests/CMakeFiles/testInitial.dir/build.make testSrc/tests/CMakeFiles/testInitial.dir/testInitial.cpp.o.provides.build
.PHONY : testSrc/tests/CMakeFiles/testInitial.dir/testInitial.cpp.o.provides

testSrc/tests/CMakeFiles/testInitial.dir/testInitial.cpp.o.provides.build: testSrc/tests/CMakeFiles/testInitial.dir/testInitial.cpp.o

# Object files for target testInitial
testInitial_OBJECTS = \
"CMakeFiles/testInitial.dir/testInitial.cpp.o"

# External object files for target testInitial
testInitial_EXTERNAL_OBJECTS =

bin/testInitial: testSrc/tests/CMakeFiles/testInitial.dir/testInitial.cpp.o
bin/testInitial: testSrc/tests/CMakeFiles/testInitial.dir/build.make
bin/testInitial: testSrc/tests/CMakeFiles/testInitial.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/testInitial"
	cd /home/xiaotang/GitHub/CPPPrimer/build/debug/testSrc/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testInitial.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
testSrc/tests/CMakeFiles/testInitial.dir/build: bin/testInitial
.PHONY : testSrc/tests/CMakeFiles/testInitial.dir/build

testSrc/tests/CMakeFiles/testInitial.dir/requires: testSrc/tests/CMakeFiles/testInitial.dir/testInitial.cpp.o.requires
.PHONY : testSrc/tests/CMakeFiles/testInitial.dir/requires

testSrc/tests/CMakeFiles/testInitial.dir/clean:
	cd /home/xiaotang/GitHub/CPPPrimer/build/debug/testSrc/tests && $(CMAKE_COMMAND) -P CMakeFiles/testInitial.dir/cmake_clean.cmake
.PHONY : testSrc/tests/CMakeFiles/testInitial.dir/clean

testSrc/tests/CMakeFiles/testInitial.dir/depend:
	cd /home/xiaotang/GitHub/CPPPrimer/build/debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xiaotang/GitHub/CPPPrimer /home/xiaotang/GitHub/CPPPrimer/testSrc/tests /home/xiaotang/GitHub/CPPPrimer/build/debug /home/xiaotang/GitHub/CPPPrimer/build/debug/testSrc/tests /home/xiaotang/GitHub/CPPPrimer/build/debug/testSrc/tests/CMakeFiles/testInitial.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : testSrc/tests/CMakeFiles/testInitial.dir/depend


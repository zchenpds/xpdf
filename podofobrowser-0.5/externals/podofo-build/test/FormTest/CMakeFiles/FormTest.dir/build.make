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
CMAKE_SOURCE_DIR = /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/podofo-build

# Include any dependencies generated for this target.
include test/FormTest/CMakeFiles/FormTest.dir/depend.make

# Include the progress variables for this target.
include test/FormTest/CMakeFiles/FormTest.dir/progress.make

# Include the compile flags for this target's objects.
include test/FormTest/CMakeFiles/FormTest.dir/flags.make

test/FormTest/CMakeFiles/FormTest.dir/FormTest.o: test/FormTest/CMakeFiles/FormTest.dir/flags.make
test/FormTest/CMakeFiles/FormTest.dir/FormTest.o: /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/test/FormTest/FormTest.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/podofo-build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object test/FormTest/CMakeFiles/FormTest.dir/FormTest.o"
	cd /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/podofo-build/test/FormTest && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/FormTest.dir/FormTest.o -c /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/test/FormTest/FormTest.cpp

test/FormTest/CMakeFiles/FormTest.dir/FormTest.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FormTest.dir/FormTest.i"
	cd /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/podofo-build/test/FormTest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/test/FormTest/FormTest.cpp > CMakeFiles/FormTest.dir/FormTest.i

test/FormTest/CMakeFiles/FormTest.dir/FormTest.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FormTest.dir/FormTest.s"
	cd /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/podofo-build/test/FormTest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/test/FormTest/FormTest.cpp -o CMakeFiles/FormTest.dir/FormTest.s

test/FormTest/CMakeFiles/FormTest.dir/FormTest.o.requires:
.PHONY : test/FormTest/CMakeFiles/FormTest.dir/FormTest.o.requires

test/FormTest/CMakeFiles/FormTest.dir/FormTest.o.provides: test/FormTest/CMakeFiles/FormTest.dir/FormTest.o.requires
	$(MAKE) -f test/FormTest/CMakeFiles/FormTest.dir/build.make test/FormTest/CMakeFiles/FormTest.dir/FormTest.o.provides.build
.PHONY : test/FormTest/CMakeFiles/FormTest.dir/FormTest.o.provides

test/FormTest/CMakeFiles/FormTest.dir/FormTest.o.provides.build: test/FormTest/CMakeFiles/FormTest.dir/FormTest.o

# Object files for target FormTest
FormTest_OBJECTS = \
"CMakeFiles/FormTest.dir/FormTest.o"

# External object files for target FormTest
FormTest_EXTERNAL_OBJECTS =

test/FormTest/FormTest: test/FormTest/CMakeFiles/FormTest.dir/FormTest.o
test/FormTest/FormTest: test/FormTest/CMakeFiles/FormTest.dir/build.make
test/FormTest/FormTest: /usr/lib/x86_64-linux-gnu/libfontconfig.so
test/FormTest/FormTest: /usr/lib/x86_64-linux-gnu/libz.so
test/FormTest/FormTest: /usr/lib/x86_64-linux-gnu/libfreetype.so
test/FormTest/FormTest: /usr/lib/x86_64-linux-gnu/libjpeg.so
test/FormTest/FormTest: /usr/lib/x86_64-linux-gnu/libfontconfig.so
test/FormTest/FormTest: /usr/lib/x86_64-linux-gnu/libz.so
test/FormTest/FormTest: /usr/lib/x86_64-linux-gnu/libfreetype.so
test/FormTest/FormTest: /usr/lib/x86_64-linux-gnu/libjpeg.so
test/FormTest/FormTest: test/FormTest/CMakeFiles/FormTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable FormTest"
	cd /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/podofo-build/test/FormTest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FormTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/FormTest/CMakeFiles/FormTest.dir/build: test/FormTest/FormTest
.PHONY : test/FormTest/CMakeFiles/FormTest.dir/build

test/FormTest/CMakeFiles/FormTest.dir/requires: test/FormTest/CMakeFiles/FormTest.dir/FormTest.o.requires
.PHONY : test/FormTest/CMakeFiles/FormTest.dir/requires

test/FormTest/CMakeFiles/FormTest.dir/clean:
	cd /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/podofo-build/test/FormTest && $(CMAKE_COMMAND) -P CMakeFiles/FormTest.dir/cmake_clean.cmake
.PHONY : test/FormTest/CMakeFiles/FormTest.dir/clean

test/FormTest/CMakeFiles/FormTest.dir/depend:
	cd /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/podofo-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/test/FormTest /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/podofo-build /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/podofo-build/test/FormTest /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/podofo-build/test/FormTest/CMakeFiles/FormTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/FormTest/CMakeFiles/FormTest.dir/depend


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
include tools/podofotxt2pdf/CMakeFiles/podofotxt2pdf.dir/depend.make

# Include the progress variables for this target.
include tools/podofotxt2pdf/CMakeFiles/podofotxt2pdf.dir/progress.make

# Include the compile flags for this target's objects.
include tools/podofotxt2pdf/CMakeFiles/podofotxt2pdf.dir/flags.make

tools/podofotxt2pdf/CMakeFiles/podofotxt2pdf.dir/podofotxt2pdf.o: tools/podofotxt2pdf/CMakeFiles/podofotxt2pdf.dir/flags.make
tools/podofotxt2pdf/CMakeFiles/podofotxt2pdf.dir/podofotxt2pdf.o: /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/tools/podofotxt2pdf/podofotxt2pdf.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/podofo-build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tools/podofotxt2pdf/CMakeFiles/podofotxt2pdf.dir/podofotxt2pdf.o"
	cd /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/podofo-build/tools/podofotxt2pdf && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/podofotxt2pdf.dir/podofotxt2pdf.o -c /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/tools/podofotxt2pdf/podofotxt2pdf.cpp

tools/podofotxt2pdf/CMakeFiles/podofotxt2pdf.dir/podofotxt2pdf.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/podofotxt2pdf.dir/podofotxt2pdf.i"
	cd /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/podofo-build/tools/podofotxt2pdf && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/tools/podofotxt2pdf/podofotxt2pdf.cpp > CMakeFiles/podofotxt2pdf.dir/podofotxt2pdf.i

tools/podofotxt2pdf/CMakeFiles/podofotxt2pdf.dir/podofotxt2pdf.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/podofotxt2pdf.dir/podofotxt2pdf.s"
	cd /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/podofo-build/tools/podofotxt2pdf && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/tools/podofotxt2pdf/podofotxt2pdf.cpp -o CMakeFiles/podofotxt2pdf.dir/podofotxt2pdf.s

tools/podofotxt2pdf/CMakeFiles/podofotxt2pdf.dir/podofotxt2pdf.o.requires:
.PHONY : tools/podofotxt2pdf/CMakeFiles/podofotxt2pdf.dir/podofotxt2pdf.o.requires

tools/podofotxt2pdf/CMakeFiles/podofotxt2pdf.dir/podofotxt2pdf.o.provides: tools/podofotxt2pdf/CMakeFiles/podofotxt2pdf.dir/podofotxt2pdf.o.requires
	$(MAKE) -f tools/podofotxt2pdf/CMakeFiles/podofotxt2pdf.dir/build.make tools/podofotxt2pdf/CMakeFiles/podofotxt2pdf.dir/podofotxt2pdf.o.provides.build
.PHONY : tools/podofotxt2pdf/CMakeFiles/podofotxt2pdf.dir/podofotxt2pdf.o.provides

tools/podofotxt2pdf/CMakeFiles/podofotxt2pdf.dir/podofotxt2pdf.o.provides.build: tools/podofotxt2pdf/CMakeFiles/podofotxt2pdf.dir/podofotxt2pdf.o

# Object files for target podofotxt2pdf
podofotxt2pdf_OBJECTS = \
"CMakeFiles/podofotxt2pdf.dir/podofotxt2pdf.o"

# External object files for target podofotxt2pdf
podofotxt2pdf_EXTERNAL_OBJECTS =

tools/podofotxt2pdf/podofotxt2pdf: tools/podofotxt2pdf/CMakeFiles/podofotxt2pdf.dir/podofotxt2pdf.o
tools/podofotxt2pdf/podofotxt2pdf: tools/podofotxt2pdf/CMakeFiles/podofotxt2pdf.dir/build.make
tools/podofotxt2pdf/podofotxt2pdf: /usr/lib/x86_64-linux-gnu/libfontconfig.so
tools/podofotxt2pdf/podofotxt2pdf: /usr/lib/x86_64-linux-gnu/libz.so
tools/podofotxt2pdf/podofotxt2pdf: /usr/lib/x86_64-linux-gnu/libfreetype.so
tools/podofotxt2pdf/podofotxt2pdf: /usr/lib/x86_64-linux-gnu/libjpeg.so
tools/podofotxt2pdf/podofotxt2pdf: tools/podofotxt2pdf/CMakeFiles/podofotxt2pdf.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable podofotxt2pdf"
	cd /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/podofo-build/tools/podofotxt2pdf && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/podofotxt2pdf.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/podofotxt2pdf/CMakeFiles/podofotxt2pdf.dir/build: tools/podofotxt2pdf/podofotxt2pdf
.PHONY : tools/podofotxt2pdf/CMakeFiles/podofotxt2pdf.dir/build

tools/podofotxt2pdf/CMakeFiles/podofotxt2pdf.dir/requires: tools/podofotxt2pdf/CMakeFiles/podofotxt2pdf.dir/podofotxt2pdf.o.requires
.PHONY : tools/podofotxt2pdf/CMakeFiles/podofotxt2pdf.dir/requires

tools/podofotxt2pdf/CMakeFiles/podofotxt2pdf.dir/clean:
	cd /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/podofo-build/tools/podofotxt2pdf && $(CMAKE_COMMAND) -P CMakeFiles/podofotxt2pdf.dir/cmake_clean.cmake
.PHONY : tools/podofotxt2pdf/CMakeFiles/podofotxt2pdf.dir/clean

tools/podofotxt2pdf/CMakeFiles/podofotxt2pdf.dir/depend:
	cd /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/podofo-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/required_libpodofo/tools/podofotxt2pdf /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/podofo-build /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/podofo-build/tools/podofotxt2pdf /home/zchenpds/git/xpdf/podofobrowser-0.5/externals/podofo-build/tools/podofotxt2pdf/CMakeFiles/podofotxt2pdf.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/podofotxt2pdf/CMakeFiles/podofotxt2pdf.dir/depend

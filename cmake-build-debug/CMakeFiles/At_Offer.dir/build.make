# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.6

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files (x86)\JetBrains\CLion 2016.3.2\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\JetBrains\CLion 2016.3.2\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\taita\Desktop\At_Offer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\taita\Desktop\At_Offer\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/At_Offer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/At_Offer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/At_Offer.dir/flags.make

CMakeFiles/At_Offer.dir/040.cpp.obj: CMakeFiles/At_Offer.dir/flags.make
CMakeFiles/At_Offer.dir/040.cpp.obj: CMakeFiles/At_Offer.dir/includes_CXX.rsp
CMakeFiles/At_Offer.dir/040.cpp.obj: ../040.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\taita\Desktop\At_Offer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/At_Offer.dir/040.cpp.obj"
	C:\TDM-GCC-64\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\At_Offer.dir\040.cpp.obj -c C:\Users\taita\Desktop\At_Offer\040.cpp

CMakeFiles/At_Offer.dir/040.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/At_Offer.dir/040.cpp.i"
	C:\TDM-GCC-64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\taita\Desktop\At_Offer\040.cpp > CMakeFiles\At_Offer.dir\040.cpp.i

CMakeFiles/At_Offer.dir/040.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/At_Offer.dir/040.cpp.s"
	C:\TDM-GCC-64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\taita\Desktop\At_Offer\040.cpp -o CMakeFiles\At_Offer.dir\040.cpp.s

CMakeFiles/At_Offer.dir/040.cpp.obj.requires:

.PHONY : CMakeFiles/At_Offer.dir/040.cpp.obj.requires

CMakeFiles/At_Offer.dir/040.cpp.obj.provides: CMakeFiles/At_Offer.dir/040.cpp.obj.requires
	$(MAKE) -f CMakeFiles\At_Offer.dir\build.make CMakeFiles/At_Offer.dir/040.cpp.obj.provides.build
.PHONY : CMakeFiles/At_Offer.dir/040.cpp.obj.provides

CMakeFiles/At_Offer.dir/040.cpp.obj.provides.build: CMakeFiles/At_Offer.dir/040.cpp.obj


# Object files for target At_Offer
At_Offer_OBJECTS = \
"CMakeFiles/At_Offer.dir/040.cpp.obj"

# External object files for target At_Offer
At_Offer_EXTERNAL_OBJECTS =

At_Offer.exe: CMakeFiles/At_Offer.dir/040.cpp.obj
At_Offer.exe: CMakeFiles/At_Offer.dir/build.make
At_Offer.exe: CMakeFiles/At_Offer.dir/linklibs.rsp
At_Offer.exe: CMakeFiles/At_Offer.dir/objects1.rsp
At_Offer.exe: CMakeFiles/At_Offer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\taita\Desktop\At_Offer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable At_Offer.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\At_Offer.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/At_Offer.dir/build: At_Offer.exe

.PHONY : CMakeFiles/At_Offer.dir/build

CMakeFiles/At_Offer.dir/requires: CMakeFiles/At_Offer.dir/040.cpp.obj.requires

.PHONY : CMakeFiles/At_Offer.dir/requires

CMakeFiles/At_Offer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\At_Offer.dir\cmake_clean.cmake
.PHONY : CMakeFiles/At_Offer.dir/clean

CMakeFiles/At_Offer.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\taita\Desktop\At_Offer C:\Users\taita\Desktop\At_Offer C:\Users\taita\Desktop\At_Offer\cmake-build-debug C:\Users\taita\Desktop\At_Offer\cmake-build-debug C:\Users\taita\Desktop\At_Offer\cmake-build-debug\CMakeFiles\At_Offer.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/At_Offer.dir/depend


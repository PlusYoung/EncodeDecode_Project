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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/yyanga/Testing2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yyanga/Testing2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cpj3.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/cpj3.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/cpj3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cpj3.dir/flags.make

CMakeFiles/cpj3.dir/proj3.cpp.o: CMakeFiles/cpj3.dir/flags.make
CMakeFiles/cpj3.dir/proj3.cpp.o: ../proj3.cpp
CMakeFiles/cpj3.dir/proj3.cpp.o: CMakeFiles/cpj3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yyanga/Testing2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cpj3.dir/proj3.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cpj3.dir/proj3.cpp.o -MF CMakeFiles/cpj3.dir/proj3.cpp.o.d -o CMakeFiles/cpj3.dir/proj3.cpp.o -c /home/yyanga/Testing2/proj3.cpp

CMakeFiles/cpj3.dir/proj3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpj3.dir/proj3.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yyanga/Testing2/proj3.cpp > CMakeFiles/cpj3.dir/proj3.cpp.i

CMakeFiles/cpj3.dir/proj3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpj3.dir/proj3.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yyanga/Testing2/proj3.cpp -o CMakeFiles/cpj3.dir/proj3.cpp.s

CMakeFiles/cpj3.dir/ColorClass.cpp.o: CMakeFiles/cpj3.dir/flags.make
CMakeFiles/cpj3.dir/ColorClass.cpp.o: ../ColorClass.cpp
CMakeFiles/cpj3.dir/ColorClass.cpp.o: CMakeFiles/cpj3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yyanga/Testing2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/cpj3.dir/ColorClass.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cpj3.dir/ColorClass.cpp.o -MF CMakeFiles/cpj3.dir/ColorClass.cpp.o.d -o CMakeFiles/cpj3.dir/ColorClass.cpp.o -c /home/yyanga/Testing2/ColorClass.cpp

CMakeFiles/cpj3.dir/ColorClass.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpj3.dir/ColorClass.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yyanga/Testing2/ColorClass.cpp > CMakeFiles/cpj3.dir/ColorClass.cpp.i

CMakeFiles/cpj3.dir/ColorClass.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpj3.dir/ColorClass.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yyanga/Testing2/ColorClass.cpp -o CMakeFiles/cpj3.dir/ColorClass.cpp.s

CMakeFiles/cpj3.dir/PpmImgClass.cpp.o: CMakeFiles/cpj3.dir/flags.make
CMakeFiles/cpj3.dir/PpmImgClass.cpp.o: ../PpmImgClass.cpp
CMakeFiles/cpj3.dir/PpmImgClass.cpp.o: CMakeFiles/cpj3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yyanga/Testing2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/cpj3.dir/PpmImgClass.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cpj3.dir/PpmImgClass.cpp.o -MF CMakeFiles/cpj3.dir/PpmImgClass.cpp.o.d -o CMakeFiles/cpj3.dir/PpmImgClass.cpp.o -c /home/yyanga/Testing2/PpmImgClass.cpp

CMakeFiles/cpj3.dir/PpmImgClass.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpj3.dir/PpmImgClass.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yyanga/Testing2/PpmImgClass.cpp > CMakeFiles/cpj3.dir/PpmImgClass.cpp.i

CMakeFiles/cpj3.dir/PpmImgClass.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpj3.dir/PpmImgClass.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yyanga/Testing2/PpmImgClass.cpp -o CMakeFiles/cpj3.dir/PpmImgClass.cpp.s

CMakeFiles/cpj3.dir/CheckUserOneIntInput.cpp.o: CMakeFiles/cpj3.dir/flags.make
CMakeFiles/cpj3.dir/CheckUserOneIntInput.cpp.o: ../CheckUserOneIntInput.cpp
CMakeFiles/cpj3.dir/CheckUserOneIntInput.cpp.o: CMakeFiles/cpj3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yyanga/Testing2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/cpj3.dir/CheckUserOneIntInput.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cpj3.dir/CheckUserOneIntInput.cpp.o -MF CMakeFiles/cpj3.dir/CheckUserOneIntInput.cpp.o.d -o CMakeFiles/cpj3.dir/CheckUserOneIntInput.cpp.o -c /home/yyanga/Testing2/CheckUserOneIntInput.cpp

CMakeFiles/cpj3.dir/CheckUserOneIntInput.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpj3.dir/CheckUserOneIntInput.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yyanga/Testing2/CheckUserOneIntInput.cpp > CMakeFiles/cpj3.dir/CheckUserOneIntInput.cpp.i

CMakeFiles/cpj3.dir/CheckUserOneIntInput.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpj3.dir/CheckUserOneIntInput.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yyanga/Testing2/CheckUserOneIntInput.cpp -o CMakeFiles/cpj3.dir/CheckUserOneIntInput.cpp.s

CMakeFiles/cpj3.dir/MessgFileClass.cpp.o: CMakeFiles/cpj3.dir/flags.make
CMakeFiles/cpj3.dir/MessgFileClass.cpp.o: ../MessgFileClass.cpp
CMakeFiles/cpj3.dir/MessgFileClass.cpp.o: CMakeFiles/cpj3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yyanga/Testing2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/cpj3.dir/MessgFileClass.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cpj3.dir/MessgFileClass.cpp.o -MF CMakeFiles/cpj3.dir/MessgFileClass.cpp.o.d -o CMakeFiles/cpj3.dir/MessgFileClass.cpp.o -c /home/yyanga/Testing2/MessgFileClass.cpp

CMakeFiles/cpj3.dir/MessgFileClass.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpj3.dir/MessgFileClass.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yyanga/Testing2/MessgFileClass.cpp > CMakeFiles/cpj3.dir/MessgFileClass.cpp.i

CMakeFiles/cpj3.dir/MessgFileClass.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpj3.dir/MessgFileClass.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yyanga/Testing2/MessgFileClass.cpp -o CMakeFiles/cpj3.dir/MessgFileClass.cpp.s

CMakeFiles/cpj3.dir/CheckUserTwoIntInput.cpp.o: CMakeFiles/cpj3.dir/flags.make
CMakeFiles/cpj3.dir/CheckUserTwoIntInput.cpp.o: ../CheckUserTwoIntInput.cpp
CMakeFiles/cpj3.dir/CheckUserTwoIntInput.cpp.o: CMakeFiles/cpj3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yyanga/Testing2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/cpj3.dir/CheckUserTwoIntInput.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cpj3.dir/CheckUserTwoIntInput.cpp.o -MF CMakeFiles/cpj3.dir/CheckUserTwoIntInput.cpp.o.d -o CMakeFiles/cpj3.dir/CheckUserTwoIntInput.cpp.o -c /home/yyanga/Testing2/CheckUserTwoIntInput.cpp

CMakeFiles/cpj3.dir/CheckUserTwoIntInput.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpj3.dir/CheckUserTwoIntInput.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yyanga/Testing2/CheckUserTwoIntInput.cpp > CMakeFiles/cpj3.dir/CheckUserTwoIntInput.cpp.i

CMakeFiles/cpj3.dir/CheckUserTwoIntInput.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpj3.dir/CheckUserTwoIntInput.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yyanga/Testing2/CheckUserTwoIntInput.cpp -o CMakeFiles/cpj3.dir/CheckUserTwoIntInput.cpp.s

# Object files for target cpj3
cpj3_OBJECTS = \
"CMakeFiles/cpj3.dir/proj3.cpp.o" \
"CMakeFiles/cpj3.dir/ColorClass.cpp.o" \
"CMakeFiles/cpj3.dir/PpmImgClass.cpp.o" \
"CMakeFiles/cpj3.dir/CheckUserOneIntInput.cpp.o" \
"CMakeFiles/cpj3.dir/MessgFileClass.cpp.o" \
"CMakeFiles/cpj3.dir/CheckUserTwoIntInput.cpp.o"

# External object files for target cpj3
cpj3_EXTERNAL_OBJECTS =

cpj3: CMakeFiles/cpj3.dir/proj3.cpp.o
cpj3: CMakeFiles/cpj3.dir/ColorClass.cpp.o
cpj3: CMakeFiles/cpj3.dir/PpmImgClass.cpp.o
cpj3: CMakeFiles/cpj3.dir/CheckUserOneIntInput.cpp.o
cpj3: CMakeFiles/cpj3.dir/MessgFileClass.cpp.o
cpj3: CMakeFiles/cpj3.dir/CheckUserTwoIntInput.cpp.o
cpj3: CMakeFiles/cpj3.dir/build.make
cpj3: CMakeFiles/cpj3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yyanga/Testing2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable cpj3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cpj3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cpj3.dir/build: cpj3
.PHONY : CMakeFiles/cpj3.dir/build

CMakeFiles/cpj3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cpj3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cpj3.dir/clean

CMakeFiles/cpj3.dir/depend:
	cd /home/yyanga/Testing2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yyanga/Testing2 /home/yyanga/Testing2 /home/yyanga/Testing2/cmake-build-debug /home/yyanga/Testing2/cmake-build-debug /home/yyanga/Testing2/cmake-build-debug/CMakeFiles/cpj3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cpj3.dir/depend


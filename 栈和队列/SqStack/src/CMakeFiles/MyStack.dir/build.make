# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.11

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.11.3/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.11.3/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/xiaorui/Desktop/数据结构/栈和队列/SqStack

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/xiaorui/Desktop/数据结构/栈和队列/SqStack

# Include any dependencies generated for this target.
include src/CMakeFiles/MyStack.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/MyStack.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/MyStack.dir/flags.make

src/CMakeFiles/MyStack.dir/SqStack.cpp.o: src/CMakeFiles/MyStack.dir/flags.make
src/CMakeFiles/MyStack.dir/SqStack.cpp.o: src/SqStack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/xiaorui/Desktop/数据结构/栈和队列/SqStack/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/MyStack.dir/SqStack.cpp.o"
	cd /Users/xiaorui/Desktop/数据结构/栈和队列/SqStack/src && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MyStack.dir/SqStack.cpp.o -c /Users/xiaorui/Desktop/数据结构/栈和队列/SqStack/src/SqStack.cpp

src/CMakeFiles/MyStack.dir/SqStack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyStack.dir/SqStack.cpp.i"
	cd /Users/xiaorui/Desktop/数据结构/栈和队列/SqStack/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/xiaorui/Desktop/数据结构/栈和队列/SqStack/src/SqStack.cpp > CMakeFiles/MyStack.dir/SqStack.cpp.i

src/CMakeFiles/MyStack.dir/SqStack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyStack.dir/SqStack.cpp.s"
	cd /Users/xiaorui/Desktop/数据结构/栈和队列/SqStack/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/xiaorui/Desktop/数据结构/栈和队列/SqStack/src/SqStack.cpp -o CMakeFiles/MyStack.dir/SqStack.cpp.s

# Object files for target MyStack
MyStack_OBJECTS = \
"CMakeFiles/MyStack.dir/SqStack.cpp.o"

# External object files for target MyStack
MyStack_EXTERNAL_OBJECTS =

src/libMyStack.a: src/CMakeFiles/MyStack.dir/SqStack.cpp.o
src/libMyStack.a: src/CMakeFiles/MyStack.dir/build.make
src/libMyStack.a: src/CMakeFiles/MyStack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/xiaorui/Desktop/数据结构/栈和队列/SqStack/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libMyStack.a"
	cd /Users/xiaorui/Desktop/数据结构/栈和队列/SqStack/src && $(CMAKE_COMMAND) -P CMakeFiles/MyStack.dir/cmake_clean_target.cmake
	cd /Users/xiaorui/Desktop/数据结构/栈和队列/SqStack/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MyStack.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/MyStack.dir/build: src/libMyStack.a

.PHONY : src/CMakeFiles/MyStack.dir/build

src/CMakeFiles/MyStack.dir/clean:
	cd /Users/xiaorui/Desktop/数据结构/栈和队列/SqStack/src && $(CMAKE_COMMAND) -P CMakeFiles/MyStack.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/MyStack.dir/clean

src/CMakeFiles/MyStack.dir/depend:
	cd /Users/xiaorui/Desktop/数据结构/栈和队列/SqStack && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/xiaorui/Desktop/数据结构/栈和队列/SqStack /Users/xiaorui/Desktop/数据结构/栈和队列/SqStack/src /Users/xiaorui/Desktop/数据结构/栈和队列/SqStack /Users/xiaorui/Desktop/数据结构/栈和队列/SqStack/src /Users/xiaorui/Desktop/数据结构/栈和队列/SqStack/src/CMakeFiles/MyStack.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/MyStack.dir/depend


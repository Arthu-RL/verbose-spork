cmake_minimum_required(VERSION 3.10)
project(learning VERSION 1.0)

# Define C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(learning)

# Add source files explicitly
target_sources(learning PRIVATE
    source/main.cpp
    # Add other source files here
)   

# Link raylib
target_link_libraries(learning raylib)

# Include header files
target_include_directories(learning PRIVATE headers)

# Enable compiler warnings
target_compile_options(learning PRIVATE -g -Wall -Wextra)


# 1. Basic Structure
# Understand the basic structure of a CMakeLists.txt file:

# Project Declaration: Start with project(ProjectName).
# Minimum CMake Version: Specify with cmake_minimum_required(VERSION 3.x).
# Setting C++ Standard: Use set(CMAKE_CXX_STANDARD 11) for C++11, for example.
# 2. Adding Executable or Library
# Decide if you are building an executable or a library:

# Executable: add_executable(MyExecutable source1.cpp source2.cpp ...)
# Library: add_library(MyLibrary STATIC|SHARED|MODULE source1.cpp source2.cpp ...)
# 3. Including Directories
# If your project uses headers from specific directories, include them:

# cmake
# Copy code
# include_directories(include_dir1 include_dir2 ...)
# 4. Finding Packages and Libraries
# Use find_package() for libraries that CMake can find automatically, or find_library() for custom locations.

# 5. Linking Libraries
# Link against libraries with target_link_libraries(MyExecutable MyLibrary), replacing MyExecutable with your target and MyLibrary with the libraries your project depends on.

# 6. Adding Subdirectories
# For larger projects structured into subdirectories, use add_subdirectory(subdir) to include their CMakeLists files.

# 7. Compiler Options
# Customize compiler options with add_compile_options() for general cases or target_compile_options() for specific targets.

# 8. Installing Targets
# Specify install rules for binaries, libraries, and files with install().

# 9. Generating Config Files
# For libraries, use configure_file() to generate config files from templates.

# Documentation Resources
# CMake Official Documentation: CMake Documentation provides a comprehensive guide, tutorials, and reference manuals.
# CMake Cookbook: Offers practical solutions for common problems. It’s available for purchase or through some library services.
# Effective Modern CMake: A GitHub project that provides best practices and guidelines.
# CMake FAQ: The CMake FAQ on the CMake community wiki offers answers to common questions.
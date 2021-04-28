cmake_minimum_required(VERSION 3.5)
project(vector3d)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

include_directories(include)

# CREATE A BASIC PROGRAM
set(MY_PROGRAM_REQUIRED_FILES
    src/main3D.cpp
    src/vector_utils.cpp
    src/Vector3D.cpp
)
add_executable(myProgram ${MY_PROGRAM_REQUIRED_FILES})

# CREATE TEST EXECUTABLE
set(TEST_REQUIRED_FILES
    src/test.cpp
    src/vector_utils.cpp
    src/Vector3D.cpp
)

add_executable(myTest ${TEST_REQUIRED_FILES})
target_link_libraries(myTest ${GTEST_LIBRARIES} pthread)

install(DIRECTORY include/
  DESTINATION include/
)
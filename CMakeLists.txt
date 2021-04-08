cmake_minimum_required(VERSION 2.6)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# CREATE A BASIC PROGRAM
set(MY_PROGRAM_REQUIRED_FILES
    main3D.cpp
    vector_utils.cpp
    Vector3D.cpp
)

add_executable(myProgram ${MY_PROGRAM_REQUIRED_FILES})


# CREATE TEST EXECUTABLE

set(TEST_REQUIRED_FILES
    test.cpp
    vector_utils.cpp
    Vector3D.cpp
)

add_executable(myTest ${TEST_REQUIRED_FILES})
target_link_libraries(myTest ${GTEST_LIBRARIES} pthread)

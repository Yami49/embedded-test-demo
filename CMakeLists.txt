cmake_minimum_required(VERSION 3.10)
project(EmbeddedTestDemo)

set(CMAKE_CXX_STANDARD 17)

# GoogleTest einbinden
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Library
add_library(controller
    src/temperature_controller.cpp
)

# Test executable
add_executable(runTests
    tests/test_temperature_controller.cpp
)

target_link_libraries(runTests
    controller
    ${GTEST_LIBRARIES}
    pthread
)

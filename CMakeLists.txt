cmake_minimum_required(VERSION 3.14)
project(EmbeddedTestDemo)

set(CMAKE_CXX_STANDARD 17)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_library(controller
    src/temperature_controller.cpp
)

add_executable(runTests
    tests/test_temperature_controller.cpp
)

target_link_libraries(runTests
    controller
    GTest::gtest_main
)
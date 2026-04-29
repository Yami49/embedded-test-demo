# Embedded Test Demo (C++ / GoogleTest)

This project demonstrates a small embedded-style C++ module with automated unit testing and a modern CMake-based build system on Windows (MSVC).

## Overview
The project simulates a simple temperature controller that switches a heater on or off based on a target temperature. It is designed to demonstrate testable embedded-style software design.

## Tech Stack
- C++17 (MSVC)
- CMake build system
- GoogleTest (via CMake FetchContent)
- Windows (Visual Studio Build Tools)

## Features
- Embedded-style control logic (temperature controller)
- Unit testing with GoogleTest
- Automated dependency handling via CMake
- Clean separation of source and tests
- Reproducible build on Windows

## Project Structure

- src/ # C++ source code
- tests/ # Unit tests (GoogleTest)
- CMakeLists.txt
- README.md


## Build & Run

### 1. Configure project
```bash
cmake -S . -B build
cmake --build build
cd build\Debug
runTests.exe
Expected Output
[==========] Running 2 tests
[ RUN      ] TemperatureControllerTest.HeaterTurnsOnBelowTarget
[       OK ] ...
[ RUN      ] TemperatureControllerTest.HeaterTurnsOffAboveTarget
[       OK ] ...
[  PASSED  ] 2 tests.
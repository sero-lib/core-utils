cmake_minimum_required(VERSION 3.15)
project(sero_core)

set(CMAKE_CXX_STANDARD 20)

add_library(sero_core_utils
        src/glfw_keys.cpp
        )

target_include_directories(sero_core_utils
        PUBLIC include
        )

add_executable(sero_core_utils_tests
        tests/main.cpp
        tests/keys_test.cpp)

target_link_libraries(sero_core_utils_tests
        PRIVATE gtest
        PRIVATE sero_core_utils
        )

add_library(sero::core_utils ALIAS sero_core_utils)
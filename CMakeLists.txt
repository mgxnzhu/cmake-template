cmake_minimum_required(VERSION 3.24)

set(ROOT_NAME GreatWork)
project(${ROOT_NAME})

# Set Clangd
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(LIB_NAME ${ROOT_NAME})
set(EXAMPLE_BIN_NAME ${ROOT_NAME}Example)
set(TEST_BIN_NAME ${ROOT_NAME}Test)

if(NOT CMAKE_CXX_STANDARD)
  message("C++ standard not set yet. Defaulting CMAKE_CXX_STANDARD=17")
  set(CMAKE_CXX_STANDARD 17)
endif()

if(CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
  message("Use libc++ for compiler clang")
  set(CLANG_DEFAULT_CXX_STDLIB libc++)
endif()

if(NOT CMAKE_INSTALL_PREFIX)
  message("Defaulting CMAKE_INSTALL_PREFIX=" ${PROJECT_SOURCE_DIR})
  set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})
endif()

add_subdirectory(src)
add_subdirectory(example)

if(NOT DEFINED DISABLE_TEST)
  enable_testing()
  add_subdirectory(test)
endif()

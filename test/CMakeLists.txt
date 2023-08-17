include(GoogleTest)
find_package(GTest)
if(NOT GTest_FOUND)
  include(FetchContent)
  FetchContent_Declare(
                      googletest
       GIT_REPOSITORY https://github.com/google/googletest.git
              GIT_TAG v1.14.0
    FIND_PACKAGE_ARGS NAMES GTest)
  FetchContent_MakeAvailable(googletest)
endif()

add_executable(${TEST_BIN_NAME} mylib_test.cpp)
target_link_libraries(${TEST_BIN_NAME} PRIVATE ${LIB_NAME} GTest::gtest GTest::gtest_main)


gtest_discover_tests(${TEST_BIN_NAME})

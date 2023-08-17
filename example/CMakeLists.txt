add_executable(${EXAMPLE_BIN_NAME} run.cpp)

target_link_libraries(${EXAMPLE_BIN_NAME} PRIVATE ${LIB_NAME})
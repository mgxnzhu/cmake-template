add_library(${LIB_NAME} mylib.cpp)
target_include_directories(${LIB_NAME} PUBLIC ../include)

install(TARGETS ${LIB_NAME} DESTINATION ${PROJECT_SOURCE_DIR}
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        )
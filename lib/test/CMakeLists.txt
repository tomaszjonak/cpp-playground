# test app name
set(TEST_APP_NAME "${LIB_NAME}Test")

# test locations
set(TEST_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}")
set(TEST_SOURCE_PATH "${TEST_MODULE_PATH}/src")

# bring sources into scope
add_subdirectory(${TEST_SOURCE_PATH})

# define test target
add_executable(${TEST_APP_NAME} ${sources})
target_link_libraries(${TEST_APP_NAME} ${LIB_NAME} thirdparty_catch)

# start testing magic
enable_testing()
ParseAndAddCatchTests(${TEST_APP_NAME})


message ("Cmake project name ${PROJECT_NAME}")

# Application name
set(APP_NAME "${PROJECT_NAME}App.out")

# Application paths
set(APP_MODULE_PATH "${PROJECT_SOURCE_DIR}/app")
set(APP_SOURCE_PATH "${APP_MODULE_PATH}/src")

# Add module sources
add_subdirectory(${APP_SOURCE_PATH})
# Add module headers
# add_subdirectory()

# Target definition
add_executable(${APP_NAME} ${SOURCE})

# Target linker search path
target_include_directories(${APP_NAME} PRIVATE
    ${SPDLOG_INCLUDE_PATH}
)


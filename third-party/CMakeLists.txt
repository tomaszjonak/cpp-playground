set (THIRD_PARTY_MODULE_PATH "${PROJECT_SOURCE_DIR}/third-party")

# Catch library
set(CATCH_MODULE_PATH "${THIRD_PARTY_MODULE_PATH}/Catch")
set(CATCH_INCLUDE_PATH "${CATCH_MODULE_PATH}/include")

add_library(thirdparty_catch INTERFACE)
target_include_directories(thirdparty_catch INTERFACE
    ${SPDLOG_INCLUDE_PATH}
)

# spdlog library
set(SPDLOG_MODULE_PATH "${THIRD_PARTY_MODULE_PATH}/spdlog")
set(SPDLOG_INCLUDE_PATH "${SPDLOG_MODULE_PATH}/include")

add_library(thirdparty_spdlog INTERFACE)
target_include_directories(thirdparty_spdlog INTERFACE
    ${SPDLOG_INCLUDE_PATH}
)

# get_target_property(foo thirdparty::spdlog INTERFACE_INCLUDE_DIRECTORIES)
# message("spdlog includes ${foo}")


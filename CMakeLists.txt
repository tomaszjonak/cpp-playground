# global CMake

cmake_minimum_required(VERSION 3.5)

project(cpp-test)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

#find_package(spdlog REQUIRED CONFIG)

add_subdirectory(third-party EXCLUDE_FROM_ALL)
add_subdirectory(app)


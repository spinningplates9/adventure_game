cmake_minimum_required(VERSION 3.10)
project(cpp_practice)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_BUILD_TYPE Debug)

set(CODE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/code")
#set(GLAD_DIR "${CMAKE_CURRENT_SOURCE_DIR}/glad")
#set(SDL3_DIR_LINUX "${CMAKE_CURRENT_SOURCE_DIR}/vendor/SDL3/linux/SDL3-3.2.26")

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 2.6.x
    GIT_SHALLOW ON
    EXCLUDE_FROM_ALL
    SYSTEM)
FetchContent_MakeAvailable(SFML)

file(GLOB_RECURSE SOURCES "${CODE_DIR}/*.cpp")
add_executable(potionshop ${SOURCES})
target_link_libraries(potionshop PRIVATE sfml-graphics sfml-audio)



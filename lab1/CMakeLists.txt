cmake_minimum_required(VERSION 3.5)

project(lab1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

find_package(Qt6 COMPONENTS Widgets REQUIRED)

enable_testing()

add_executable(lab1 main.cpp equalation.cpp equalation.h)

target_link_libraries(${PROJECT_NAME} PRIVATE GTest::gtest_main  Qt6::Widgets)

install(TARGETS lab1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

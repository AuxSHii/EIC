cmake_minimum_required(VERSION 3.20)

project(EIC
    VERSION 0.1.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(eic_core INTERFACE)

target_include_directories(eic_core
    INTERFACE
        ${PROJECT_SOURCE_DIR}/engine
)

enable_testing()

add_executable(eic_smoke_test
    tests/smoke_test.cpp
)

target_link_libraries(eic_smoke_test
    PRIVATE eic_core
)

add_test(NAME eic_smoke_test COMMAND eic_smoke_test)

add_executable(eic_core_constants_test
    tests/core_constants_test.cpp
)

target_link_libraries(eic_core_constants_test
    PRIVATE eic_core
)

add_test(
    NAME eic_core_constants_test
    COMMAND eic_core_constants_test
)
add_executable(eic_math_vectors_test
    tests/math_vectors_test.cpp
)

target_link_libraries(eic_math_vectors_test
    PRIVATE eic_core
)

add_test(
    NAME eic_math_vectors_test
    COMMAND eic_math_vectors_test
)

add_executable(eic_particles_test
     tests/particles_test.cpp
)
target_link_libraries(eic_particles_test 
PRIVATE eic_core)

add_test(
NAME eic_particles_test
COMMAND eic_particles_test)
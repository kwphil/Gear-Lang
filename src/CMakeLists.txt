cmake_minimum_required(VERSION 3.15)
project(GearLang)

set(CMAKE_CXX_STANDARD 23)

# find_package(LLVM REQUIRED CONFIG)
# message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
# message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

# include_directories(${LLVM_INCLUDE_DIRS})
# add_definitions(${LLVM_DEFINITIONS})

add_executable(gearlang main.cpp)
# llvm_map_components_to_libnames(llvm_libs suuport core irreader orcjit native)

target_link_libraries(gearlang)

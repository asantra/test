cmake_minimum_required(VERSION 3.14)

find_package(ROOT REQUIRED)

add_library(LUXESimEventDict SHARED)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
ROOT_GENERATE_DICTIONARY(
    G__LUXESimEventDict 
    ${CMAKE_CURRENT_SOURCE_DIR}/dummy.h 
    MODULE
    LUXESimEventDict 
    LINKDEF ${CMAKE_CURRENT_SOURCE_DIR}/LinkDef.h)
target_link_libraries(
    G__LUXESimEventDict 
    PRIVATE 
    ROOT::RIO)
    

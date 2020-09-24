cmake_minimum_required(VERSION 3.1)

project(CcomplexVector)

include_directories(${PROJECT_SOURCE_DIR})

set (CCOMPLEX_VECTOR_SRC  main.cpp autotest.cpp)
set (CCOMPLEX_VECTOR_HDR klass.h)

add_executable (${PROJECT_NAME} ${CCOMPLEX_VECTOR_SRC} ${CCOMPLEX_VECTOR_HDR})
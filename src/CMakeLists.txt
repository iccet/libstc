cmake_minimum_required(VERSION 3.5)

project(libstc)

set(NODES_DIR "${PROJECT_SOURCE_DIR}/node")
set(TEMPLATE_DIR "${PROJECT_SOURCE_DIR}/templates")

include_directories (
    ${PROJECT_SOURCE_DIR}
    ${NODES_DIR}
    ${SOURCE_DIR}
    ${TEMPLATE_DIR}
)

file(GLOB SOURCE_FILES
    ${SOURCE_DIR}/*.cpp
)

file(GLOB HEADER_FILES
    ${NODES_DIR}/*.hpp
    ${PROJECT_SOURCE_DIR}/*.hpp
)

add_library(${PROJECT_NAME} ${HEADER_FILES})

set_target_properties(${PROJECT_NAME} PROPERTIES LINKER_LANGUAGE CXX)

target_link_directories(${PROJECT_NAME}
    PRIVATE
            ${NODES_DIR}
            ${TEMPLATE_DIR}
            ${SOURCE_DIR}
            ${PROJECT_SOURCE_DIR}
    PUBLIC
            ${INCLUDE_DIR})

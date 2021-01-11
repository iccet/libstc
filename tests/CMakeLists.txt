cmake_minimum_required(VERSION 3.5)

project(TMP LANGUAGES CXX)

set(GRAPH_TEST_CASE_DIR "${PROJECT_SOURCE_DIR}/graph_test")
set(QUEUE_TEST_CASE_DIR "${PROJECT_SOURCE_DIR}/queue_test")
set(LIST_TEST_CASE_DIR "${PROJECT_SOURCE_DIR}/list_test")
set(STACK_TEST_CASE_DIR "${PROJECT_SOURCE_DIR}/stack_test")
set(XOR_LIST_TEST_CASE_DIR "${PROJECT_SOURCE_DIR}/xor_list_test")

add_subdirectory(${GRAPH_TEST_CASE_DIR})
add_subdirectory(${QUEUE_TEST_CASE_DIR})
add_subdirectory(${LIST_TEST_CASE_DIR})
add_subdirectory(${STACK_TEST_CASE_DIR})
add_subdirectory(${XOR_LIST_TEST_CASE_DIR})

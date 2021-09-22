cmake_minimum_required(VERSION 3.17)
project(zmq_server)

set(CMAKE_CXX_STANDARD 20)

add_executable(zmq_server main.cpp)

add_subdirectory(external/libzmq EXCLUDE_FROM_ALL)
target_link_libraries(zmq_server PUBLIC libzmq)
target_link_libraries(zmq_server PRIVATE libzmq-static)

add_subdirectory(external/cppzmq EXCLUDE_FROM_ALL)
target_link_libraries(zmq_server PUBLIC cppzmq)
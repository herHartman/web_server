cmake_minimum_required(VERSION 3.20)
project(web_server)

set(CMAKE_CXX_STANDARD 17)

add_executable(web_server main.cpp web/TCPSocket.cpp web/TCPSocket.h web/TCPServer.cpp web/TCPServer.h web/TCPClient.cpp web/TCPClient.h)

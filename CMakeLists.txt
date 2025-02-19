cmake_minimum_required(VERSION 3.5)
project(mcp2515)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/~/bcm2835)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

add_executable( mcp2515
	src/mcp2515.cpp
	src/main.cpp
)

# added these lines
target_link_libraries(mcp2515 bcm2835)
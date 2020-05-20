cmake_minimum_required(VERSION 2.8)

project(Puzzle)

set(CMAKE_CXX_STANDARD 11)

find_package(GTest REQUIRED)

include_directories(${GTEST_INCLUDE_DIRS})

set(HEADERS Global.h
            GameInterface.h
            Tile_factory.h
            Tile.h
            Tile_C1.h
            Tile_C2.h
            Tile_C3.h
            Tile_C4.h
            Table.h
            Printers.h
)

set(SOURCES GameInterface.cpp
            Tile_factory.cpp
            Tile_C1.cpp
            Tile_C2.cpp
            Tile_C3.cpp
            Tile_C4.cpp
            Table.cpp
            Printers.cpp
)

add_executable(Puzzle main.cpp ${HEADERS} ${SOURCES})
add_executable(ForTest main-tests.cpp tests.cpp ${HEADERS} ${SOURCES})

target_link_libraries(ForTest ${GTEST_LIBRARIES} pthread)

enable_testing()

cmake_minimum_required( VERSION 3.28 )
project( build_system )

set( CMAKE_CXX_STANDARD 20 )

add_executable( app main.cpp )

add_subdirectory( expTest )

target_compile_options( app PUBLIC "/utf-8" )
target_link_libraries( app PUBLIC expTest )


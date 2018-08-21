cmake_minimum_required(VERSION 2.8)

project(LiStack)

aux_source_directory(. DIR_SRCS)

add_subdirectory(src)

add_executable(main ${DIR_SRCS})

target_link_libraries(main MyLiStack)

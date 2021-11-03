cmake_minimum_required(VERSION 2.8)

project(CNN_Cmodel)

include_directories(./cfg)
include_directories(./src)

aux_source_directory(./cfg      SOURCE)
aux_source_directory(./src      SOURCE)

add_executable(CNN_Cmodel ${SOURCE} main.cpp)
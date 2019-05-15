cmake_minimum_required(VERSION 2.8.12)
project(DatetimeUtilSharedLib)

add_library(datetimeutil datetimeutil.h datetimeutil.cpp)
add_executable(main main.cpp)
target_link_libraries(main datetimeutil)

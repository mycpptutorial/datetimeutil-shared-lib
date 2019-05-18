cmake_minimum_required(VERSION 2.8.12)
project(DatetimeUtilSharedLib)

link_directories(${CMAKE_CURRENT_BINARY_DIR})

SET(CMAKE_EXE_LINKER_FLAGS
          "${CMAKE_EXE_LINKER_FLAGS} -Wl,-rpath -Wl,$ORIGIN")

add_library(datetimeutil SHARED datetimeutil.h datetimeutil.cpp)
add_executable(main main.cpp)
target_link_libraries(main datetimeutil)

install(TARGETS datetimeutil DESTINATION /usr/local/lib)

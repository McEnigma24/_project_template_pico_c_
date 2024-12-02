cmake_minimum_required(VERSION 3.18)
project(MyProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(EXE_NAME "out.exe")


# Ustawienia builda (Debug, Release)
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

# Dodaj pliki źródłowe
include_directories(_inc)
aux_source_directory(_src SOURCES)



# Domyślne flagi optymalizacji
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -march=native")

# Zwykły target
#add_executable(${EXE_NAME} ${SOURCES})
#set_target_properties(${EXE_NAME} PROPERTIES COMPILE_FLAGS "-m64" LINK_FLAGS "-m64")


add_executable(${EXE_NAME} ${SOURCES})
target_compile_definitions(${EXE_NAME} PRIVATE LINUX)
set_target_properties(${EXE_NAME} PROPERTIES COMPILE_FLAGS "-m64" LINK_FLAGS "-m64")

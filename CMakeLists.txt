cmake_minimum_required(VERSION 3.6)
project(Herth)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES src/main.c src/HE_1902/he_run.c src/HE_1902/he_run.h src/HE_2002/he_run.c src/HE_2002/he_run.h src/HE_2102/he_run.c src/HE_2102/he_run.h src/HE_2202/he_2202.c src/HE_2202/he_2202.h)
add_executable(Herth ${SOURCE_FILES})

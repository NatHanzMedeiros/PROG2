cmake_minimum_required(VERSION 4.0)
project(laboratorio_NatHanzMedeiros C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(laboratorios)

add_executable(laboratorio_NatHanzMedeiros
        laboratorios/lab_1.c
        laboratorios/header/lab_1.h
        laboratorios/main.c)

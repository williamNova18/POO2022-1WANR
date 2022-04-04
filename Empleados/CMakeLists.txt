cmake_minimum_required(VERSION 3.21)
project(poo_hoy)

set(CMAKE_CXX_STANDARD 14)

add_executable(poo_hoy main.cpp Employee.cpp Employee.h Salaried.cpp Salaried.h Hourly.cpp Hourly.h Commission.cpp Commission.h BasePlus.cpp BasePlus.h Daily.cpp Daily.h)

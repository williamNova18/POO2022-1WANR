cmake_minimum_required(VERSION 3.21)
project(FigurasGeometricas)

set(CMAKE_CXX_STANDARD 14)

add_executable(FigurasGeometricas main.cpp FigurasGeometricas.cpp FigurasGeometricas.h Circulo.cpp Circulo.h Cuadrado.cpp Cuadrado.h Rectangulo.cpp Rectangulo.h Triangulo.cpp Triangulo.h View.cpp View.h)

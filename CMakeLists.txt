cmake_minimum_required(VERSION 3.29)
project(Ejercicios_STL)

set(CMAKE_CXX_STANDARD 14)

include_directories(Ciencia)
include_directories(Geometría)
include_directories(Matemáticas)
include_directories(STL)

add_executable(Ejercicios_STL
    Ciencia/Ciencia.cpp
    Ciencia/Ciencia.h
    Geometría/Circulo.cpp
    Geometría/Geometria.h
    Geometría/Triangulo.cpp
    Matemáticas/Matematicas.cpp
    Matemáticas/Matematicas.h
    STL/STL.cpp
    STL/STL.h
    main.cpp)

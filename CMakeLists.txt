cmake_minimum_required(VERSION 3.29)
project(Restaurante)

set(CMAKE_CXX_STANDARD 14)

add_executable(Restaurante
    main.cpp
        Restaurant.h
        Dish.h
        Menu.h
        Order.h
        Payment.h
        Table.h
        Order.cpp
        Payment.cpp
        Table.cpp
        Dish.cpp
        Menu.cpp)


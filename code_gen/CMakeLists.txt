cmake_minimum_required(VERSION 4.2)
project(code_gen)

set(CMAKE_CXX_STANDARD 14)

include_directories(headers)

add_executable(code_gen
        headers/Client.h
        headers/IObserver.h
        headers/TSubject.h
        headers/TTemperatureAction.h
        headers/TThermometer.h
        IObserver.cpp
        TSubject.cpp
        TTemperatureAction.cpp
        TThermometer.cpp
        main.cpp)

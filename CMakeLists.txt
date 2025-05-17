cmake_minimum_required(VERSION 3.10)
project(Lab4)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab4
    main.cpp
    console_ui.cpp
    file_logger.cpp
    flower_factory.cpp
    flower_repository.cpp
    flower_service.cpp
    flower.cpp
)
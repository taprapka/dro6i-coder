cmake_minimum_required(VERSION 3.25)

project(Dro6iCoder)

find_package(Geode REQUIRED)

add_geode_mod(
    ID "taprapka.dro6i_coder"
    VERSION v1.0.0
    SOURCES src/main.cpp
)

# This adds the default Geode headers and libraries

cmake_minimum_required (VERSION 3.0)

project (EigenTest)

add_subdirectory(Eigen3)

find_package (Eigen3 3.3 REQUIRED NO_MODULE)

add_executable ("${PROJECT_NAME}" main.cpp)

target_link_libraries ("${PROJECT_NAME}" Eigen3::Eigen)
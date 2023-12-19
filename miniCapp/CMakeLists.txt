cmake_minimum_required(VERSION 3.10)
project(miniCapp LANGUAGES C)

add_executable(${PROJECT_NAME} main.c)
target_link_libraries(${PROJECT_NAME} PRIVATE miniClib)
#install(TARGETS ${PROJECT_NAME} miniClib DESTINATION bin)

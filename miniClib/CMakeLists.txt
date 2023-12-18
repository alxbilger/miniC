cmake_minimum_required(VERSION 3.10)
project(miniClib VERSION 0.1 LANGUAGES C)
configure_file(miniCConfig.h.in miniCConfig.h)

add_library(${PROJECT_NAME} square.h square.c miniCConfig.h.in)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} "${PROJECT_BINARY_DIR}")
set_target_properties(${PROJECT_NAME} PROPERTIES
                      POSITION_INDEPENDENT_CODE ${BUILD_SHARED_LIBS}
                      )

# define the symbol stating we are using the declspec(dllexport) when
# building on windows
target_compile_definitions(${PROJECT_NAME} PRIVATE "EXPORTING_MINICLIB")

install(TARGETS ${PROJECT_NAME} DESTINATION lib)
install(FILES square.h ${PROJECT_BINARY_DIR}/miniCConfig.h DESTINATION include)

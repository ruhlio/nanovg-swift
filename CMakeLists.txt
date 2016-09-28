cmake_minimum_required(VERSION 3.6)
project(nanovg)

set(SOURCES nanovg/src/nanovg.c nanovg_gl.c)
find_package(OpenGL REQUIRED)

add_library(nanovg STATIC ${SOURCES})
install(TARGETS nanovg DESTINATION lib)
install(FILES nanovg/src/nanovg.h DESTINATION include)

cmake_minimum_required(VERSION 3.13.4)

project(build)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(ext/glfw)

find_package(OpenGL REQUIRED)

target_include_directories(${PROJECT_NAME}
    PUBLIC ext/glfw/include
    ${OPENGL_INCLUDE_DIRS}
)

target_link_directories(${PROJECT_NAME}
    PRIVATE ext/glfw/src
)

target_link_libraries(${PROJECT_NAME}
    glfw
    ${OPENGL_LIBRARIES}
)
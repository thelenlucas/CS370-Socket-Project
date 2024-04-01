cmake_minimum_required(VERSION 3.10)
project(SocketProject)

# C++ Standard 11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find opengl/glut/glew
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
find_package(GLEW REQUIRED)

include_directories(${OPENGL_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS} ${GLEW_INCLUDE_DIRS})

include_directories(include)

# Add source files
file(GLOB SOURCES "src/*.cpp")
add_executable(SocketProject src/main.cpp)

target_link_libraries(SocketProject ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} ${GLEW_LIBRARIES})
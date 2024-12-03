cmake_minimum_required(VERSION 3.16)

project(hello VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find Qt modules (Widgets and Charts)
find_package(Qt6 REQUIRED COMPONENTS Widgets Charts)
qt_standard_project_setup()

# Add the executable
qt_add_executable(hello
    main.cpp
)

# Link Qt libraries to your target
target_link_libraries(hello PRIVATE Qt6::Widgets Qt6::Charts)

# Set properties
set_target_properties(hello PROPERTIES
    WIN32_EXECUTABLE ON
    MACOSX_BUNDLE OFF
)


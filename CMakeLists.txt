cmake_minimum_required(VERSION 3.5)

project(ClickerT)

# Find the QtWidgets library
find_package(Qt5 COMPONENTS Widgets REQUIRED)

# Tell CMake to run MOC when necessary:
set(CMAKE_AUTOMOC ON)

# As moc files are generated in the binary dir, tell CMake
# to always look for includes there:
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Source files
set(SOURCE_FILES
    main.cpp
    MainWindow.cpp
    CustomWidget.cpp
)

# Header files for ensuring they show up in IDEs like Qt Creator
set(HEADER_FILES
    MainWindow.h
    CustomWidget.h
)

# Create the executable
add_executable(${PROJECT_NAME} ${SOURCE_FILES} ${HEADER_FILES})

# Link against the Qt5::Widgets target
target_link_libraries(${PROJECT_NAME} Qt5::Widgets)

cmake_minimum_required(VERSION 3.16)

project(Media_player VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find Qt packages (Widgets + Multimedia + MultimediaWidgets)
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Multimedia MultimediaWidgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Multimedia MultimediaWidgets)

# Project sources
set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
)

# Create executable target
if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Media_player
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        volume_control.h volume_control.cpp volume_control.ui
        Resources.qrc



    )
else()
    add_executable(Media_player ${PROJECT_SOURCES})
endif()

# Link Qt libraries AFTER creating target
target_link_libraries(Media_player PRIVATE
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::Multimedia
    Qt${QT_VERSION_MAJOR}::MultimediaWidgets
)

# iOS / macOS bundle settings
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.Media_player)
endif()

set_target_properties(Media_player PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS Media_player
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# Finalize Qt6 executable
if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Media_player)
endif()

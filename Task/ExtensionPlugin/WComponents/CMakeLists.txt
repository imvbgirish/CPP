cmake_minimum_required(VERSION 3.16)

project(WComponents VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(QT_QML_OUTPUT_DIRECTORY  ${CMAKE_BINARY_DIR})

find_package(Qt6 6.2 COMPONENTS Core Quick REQUIRED)
find_package(Qt6 REQUIRED COMPONENTS Core)

# qt_add_library(WComponents STATIC)
qt_add_qml_module(WComponents
    URI "com.WComponents"
    CLASS_NAME WComponentsPlugin
    PLUGIN_TARGET WComponentsPlugin
    VERSION 1.0
    QML_FILES CustomBtn.qml
    SOURCES
    WComponents_plugin.cpp
    WComponents_plugin.h
    WAction.h
    WAction.cpp
)

set_target_properties(WComponents PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_compile_definitions(WComponents
    PRIVATE $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:QT_QML_DEBUG>)
target_link_libraries(WComponents
    PRIVATE
    Qt6::Quick
    Qt6::Core
)
target_link_libraries(WComponents PRIVATE Qt6::Core)

target_include_directories(WComponents PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})


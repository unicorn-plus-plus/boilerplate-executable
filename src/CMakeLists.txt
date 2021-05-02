set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

file(GLOB autopilot_sources "**.cpp")
SET(autopilot ${autopilot_sources})
add_library(${PROJECT_NAME} ${autopilot})
target_include_directories(${PROJECT_NAME} PUBLIC ../include)


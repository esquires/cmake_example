set (APP_NAME sandbox)

add_executable(${APP_NAME} main.cpp)

target_link_libraries(${APP_NAME}
    pybind11::embed
    )

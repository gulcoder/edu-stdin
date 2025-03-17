add_executable(greeter main.cpp)

target_link_libraries(greeter PRIVATE greetings CLI11::CLI11)
target_include_directories(greeter PRIVATE ${CMAKE_INSTALL_DIR}/include)


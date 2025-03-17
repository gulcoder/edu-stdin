cmake_minimum_required(VERSION 3.25)
project(edu-stdin LANGUAGES CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
	CLI11
	GIT_REPOSITORY https://github.com/CLIUtils/CLI11.git
	GIT_TAG v2.3.2
)
FetchContent_MakeAvailable(CLI11)

add_subdirectory(lib)
add_subdirectory(src)

install(TARGETS greeter DESTINATION bin)

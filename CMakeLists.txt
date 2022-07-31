cmake_minimum_required (VERSION 3.20)

set(ignore_me "${SDK_ARCH}")  # Suppress the unused warning if needed

project("unrealsdk")

if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/user-python.cmake")
   include("${CMAKE_CURRENT_SOURCE_DIR}/user-python.cmake")
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(Python COMPONENTS Interpreter Development)
if(NOT Python_FOUND)
	message(FATAL_ERROR "Couldn't find Python!")
endif()
execute_process(COMMAND ${Python_EXECUTABLE} -c "import sys;print('Using Python ' + sys.version)")

add_subdirectory(libs/minhook)
add_subdirectory(libs/pybind11)

# Source Files
file(GLOB_RECURSE sources CONFIGURE_DEPENDS "src/*.c" "src/*.cpp" "src/*.h" "src/*.hpp")

# Can't use pybind11_add_module cause Visual Studio won't let you debug it
add_library(unrealsdk SHARED
	${sources}
	"libs/loguru/loguru.hpp"
	"libs/loguru/loguru.cpp"
)
target_include_directories(unrealsdk PUBLIC "src/include" "libs/loguru")

target_link_libraries(unrealsdk PUBLIC minhook pybind11::embed pybind11::lto)
if(MSVC)
	target_link_libraries(unrealsdk PUBLIC pybind11::windows_extras)
endif()


target_compile_definitions(unrealsdk PUBLIC ${SDK_UE_VERSION})
# CMake by default defines NDEBUG in release, we also want the opposite
target_compile_definitions(unrealsdk PUBLIC "$<$<CONFIG:DEBUG>:_DEBUG>")

# For Windows builds, enable unicode
if(WIN32)
	target_compile_definitions(unrealsdk PUBLIC "UNICODE" "_UNICODE")
endif()

# The precompiled header must be defined AFTER the compile defines
target_precompile_headers(unrealsdk PUBLIC "src/stdafx.cpp")

if(MSVC)
	# Enable Edit and Continue.
	string(REPLACE "/Zi" "" CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG}")
	string(REPLACE "/Zi" "" CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG}")
	string(REPLACE "/Zi" "" CMAKE_C_FLAGS_RELWITHDEBINFO "${CMAKE_C_FLAGS_RELWITHDEBINFO}")
	string(REPLACE "/Zi" "" CMAKE_CXX_FLAGS_RELWITHDEBINFO "${CMAKE_CXX_FLAGS_RELWITHDEBINFO}")

	target_compile_options(unrealsdk PUBLIC "$<$<CONFIG:DEBUG>:/ZI>")
	target_link_options(unrealsdk PUBLIC "/INCREMENTAL")
endif()

# Postbuild
set(POSTBUILD_SCRIPT "postbuild")
if(CMAKE_HOST_WIN32)
	set(POSTBUILD_SCRIPT "${POSTBUILD_SCRIPT}.bat")
endif()
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/${POSTBUILD_SCRIPT}")
	add_custom_command(
		TARGET unrealsdk
		POST_BUILD
		COMMAND ${POSTBUILD_SCRIPT} "\"$<SHELL_PATH:$<TARGET_FILE:unrealsdk>>\" \"${SDK_UE_VERSION}\" \"${SDK_ARCH}\" \"$<IF:$<CONFIG:DEBUG>,DEBUG,RELEASE>\""
		WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
	)
endif()

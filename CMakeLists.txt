cmake_minimum_required (VERSION 3.20)

if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/user-python.cmake")
   include("${CMAKE_CURRENT_SOURCE_DIR}/user-python.cmake")
endif()

project("unrealsdk")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(Python COMPONENTS Interpreter Development)
if(NOT Python_FOUND)
	message(FATAL_ERROR "Couldn't find Python!")
endif()
execute_process(COMMAND ${Python_EXECUTABLE} -c "import sys;print('Using Python ' + sys.version)")

# Source Files
file(GLOB_RECURSE sources CONFIGURE_DEPENDS "src/*.c" "src/*.cpp")

set(include_dirs "src/include" "libs/loguru" "libs/minhook/include" "libs/pybind11/include")
foreach(dirname ${include_dirs})
	file(GLOB_RECURSE dir_include_files CONFIGURE_DEPENDS "${dirname}/*.h" "${dirname}/*.hpp")
	list(APPEND include_files ${dir_include_files})
endforeach()

file(GLOB_RECURSE minhook_sources CONFIGURE_DEPENDS "libs/minhook/src/*.c")
if(SDK_ARCH EQUAL "x86")
	list(REMOVE_ITEM minhook_sources "${CMAKE_CURRENT_SOURCE_DIR}/libs/minhook/src/hde/hde64.c")
else()
	list(REMOVE_ITEM minhook_sources "${CMAKE_CURRENT_SOURCE_DIR}/libs/minhook/src/hde/hde32.c")
endif()
SET_SOURCE_FILES_PROPERTIES(${minhook_sources} PROPERTIES LANGUAGE CXX)

add_library(unrealsdk SHARED
	${sources}
	${include_files}
	"libs/loguru/loguru.cpp"
	${minhook_sources}
)

target_include_directories(unrealsdk PUBLIC ${include_dirs} ${Python_INCLUDE_DIRS})
target_link_directories(unrealsdk PUBLIC ${Python_LIBRARY_DIRS})

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
	# Try enable Edit and Continue. Doesn't like to work much ¯\_(ツ)_/¯ .
	string(REPLACE "/Zi" "" CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG}")
	string(REPLACE "/Zi" "" CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG}")
	string(REPLACE "/Zi" "" CMAKE_C_FLAGS_RELWITHDEBINFO "${CMAKE_C_FLAGS_RELWITHDEBINFO}")
	string(REPLACE "/Zi" "" CMAKE_CXX_FLAGS_RELWITHDEBINFO "${CMAKE_CXX_FLAGS_RELWITHDEBINFO}")

	target_compile_options(unrealsdk PUBLIC "$<$<CONFIG:DEBUG>:/ZI>")
	target_link_options(unrealsdk PUBLIC "/INCREMENTAL")

	# Need this for now, may be able to remove later
	target_compile_options(unrealsdk PUBLIC "/bigobj")
endif()

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

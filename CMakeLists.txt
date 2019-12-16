# project attributes
cmake_minimum_required( VERSION 3.10 )
project( FeatherVibe VERSION 0.0.1 )

# project settings
set( CMAKE_CXX_STANDARD 17 )
set( CMAKE_CXX_STANDARD_REQUIRED YES )
set( CMAKE_BUILD_TYPE Debug )

# packages and dependencies
find_package( GLEW REQUIRED )
find_package( OpenGL REQUIRED )
find_package( SDL2 REQUIRED )

file(GLOB_RECURSE FV_SOURCE ${CMAKE_SOURCE_DIR}/src/*.cpp)

add_executable( demo ${FV_SOURCE} )

target_include_directories( demo PUBLIC
	${CMAKE_SOURCE_DIR}/include
	${GLEW_INCLUDE_DIR}
	${OPENGL_INCLUDE_DIR}
	${SDL2_INCLUDE_DIRS}
)

target_link_libraries( demo
	${GLEW_LIBRARIES}
	${OPENGL_LIBRARIES}
	${SDL2_LIBRARIES}
)
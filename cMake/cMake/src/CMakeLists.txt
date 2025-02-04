# CMakeList.txt : projet CMake pour cMake, incluez la source et définissez
# la logique spécifique au projet ici.
#
file(GLOB ALL_SRC "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

add_executable (${PROJECT_NAME} ${ALL_SRC})

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(${PROJECT_NAME} PUBLIC tools)
# Ajoutez une source à l'exécutable de ce projet.

###target_include_directories(StaticLib22 PUBLIC
###  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/Stat>
###  $<INSTALL_INTERFACE:include/StaticLib22>  # <prefix>/include/mylib
###)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET cMake PROPERTY CXX_STANDARD 20)
endif()


# TODO: Ajoutez des tests et installez des cibles si nécessaire.

find_package(SFML COMPONENTS system window graphics audio CONFIG REQUIRED)


target_link_libraries(${PROJECT_NAME} PRIVATE
	sfml-audio
	sfml-system
	sfml-graphics
	sfml-window
	sfml-network

)
cmake_minimum_required(VERSION 3.15...3.23)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O")

add_executable(OgreTryhard
        main.cpp
        App.cpp
        )

target_link_libraries(OgreTryhard
        PRIVATE myproject::myproject_options
            myproject::myproject_warnings
            ${OGRE_LIBRARIES}
        )

set_target_properties(OgreTryhard
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "../"
)

include_directories(OgreTryhard PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(handlers)

cmake_minimum_required(VERSION 3.15...3.23)

target_sources(OgreTryhard PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/events.cpp"
)

target_include_directories(OgreTryhard PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}")

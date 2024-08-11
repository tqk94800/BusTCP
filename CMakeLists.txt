project(BusTCP)
cmake_minimum_required(VERSION 3.25)
set(CMAKE_CXX_COMPILER_VERSION "4.6.3")

#Define some vars
set(libCommonPath ${CMAKE_SOURCE_DIR}/LibCommon)
add_subdirectory("${libCommonPath}/Logger")

add_executable(BusTCPNode Src/BusTCPNode.cpp)
target_include_directories(BusTCPNode PUBLIC "${libCommonPath}/Logger/Include")
target_link_directories(BusTCPNode PUBLIC "${libCommonPath}/Logger/Include")
target_link_libraries(BusTCPNode Logger)

add_executable(BusTCPConnector Src/BusTCPConnectorCXX.cpp)
#add_subdirectory("${libCommonPath}/Logger")
target_include_directories(BusTCPConnector PUBLIC "${libCommonPath}/Logger/Include")
target_link_directories(BusTCPConnector PUBLIC "${libCommonPath}/Logger/Include")
target_link_libraries(BusTCPConnector Logger)


message("${TARGET_INCLUDE_DIRECTORIES}")
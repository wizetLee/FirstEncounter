cmake_minimum_required(VERSION 3.25)
project(FirstEncounter)

set(CMAKE_CXX_STANDARD 17)

add_executable(FirstEncounter main.cpp)

#FIXME: 此处是写死的路径使用的第三方，应该是错误的操作
set(LIBEVENT_PATH /opt/homebrew/Cellar/libevent/2.1.12)
include_directories(${LIBEVENT_PATH}/include)
link_directories(${LIBEVENT_PATH}/lib)

#find_package(libevent REQUIRED)
target_link_libraries(FirstEncounter ${LIBEVENT_PATH}/lib/libevent.a)



#FIXME: 此处是写死的路径使用的第三方，应该是错误的操作
set(MONGOOSE_PATH /opt/homebrew/Cellar/mongoose/7.7)
include_directories(${MONGOOSE_PATH}/include)
link_directories(${MONGOOSE_PATH}/lib)

#find_package(libevent REQUIRED)
target_link_libraries(FirstEncounter ${MONGOOSE_PATH}/lib/libmongoose.dylib)

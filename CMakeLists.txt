cmake_minimum_required(VERSION 3.25)
project(FirstEncounter)

set(CMAKE_CXX_STANDARD 17)

add_executable(FirstEncounter main.cpp animal/Lion.cpp animal/Lion.h animal/Tiger.cpp animal/Tiger.h animal/Animal.cpp animal/Animal.h date/WZDate.cpp date/WZDate.h decimal/Decimal.cpp decimal/Decimal.h stock/Stock.cpp stock/Stock.h Stack/Stack.cpp Stack/Stack.h Stack/Stack2.cpp Stack/Stack2.h string/aString.cpp string/aString.h generic/generic.cpp generic/generic.h)

#FIXME: 此处是写死的路径使用的第三方，应该是错误的操作
set(LIBEVENT_PATH /opt/homebrew/Cellar/libevent/2.1.12_1)
include_directories(${LIBEVENT_PATH}/include)
link_directories(${LIBEVENT_PATH}/lib)

#find_package(libevent REQUIRED)
target_link_libraries(FirstEncounter ${LIBEVENT_PATH}/lib/libevent.a)



#FIXME: 此处是写死的路径使用的第三方，应该是错误的操作
set(MONGOOSE_PATH /opt/homebrew/Cellar/mongoose/7.12)
include_directories(${MONGOOSE_PATH}/include)
link_directories(${MONGOOSE_PATH}/lib)

#find_package(libevent REQUIRED)
target_link_libraries(FirstEncounter ${MONGOOSE_PATH}/lib/libmongoose.dylib)


set(REDIS_PATH /opt/homebrew/Cellar/hiredis/1.2.0)
include_directories(${REDIS_PATH}/include)
link_directories(${REDIS_PATH}/lib)

#find_package(libevent REQUIRED)
target_link_libraries(FirstEncounter ${REDIS_PATH}/lib/libhiredis.1.1.0.dylib)
target_link_libraries(FirstEncounter ${REDIS_PATH}/lib/libhiredis.a)
target_link_libraries(FirstEncounter ${REDIS_PATH}/lib/libhiredis.dylib)

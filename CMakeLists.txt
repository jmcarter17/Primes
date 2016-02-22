cmake_minimum_required(VERSION 3.4)
project(Primes)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(MY_DIRS inc)
include_directories(${MY_DIRS})

set(MAIN main.cpp)
set(SOURCE_FILES src/PrimeFactorizer.cpp src/PrimeLister.cpp inc/PrimeLister.h)
set(TEST_FILES tests/allTests.cpp tests/allTests.cpp tests/testFactorIntoPrimes.cpp tests/testListPrimesUpToANumber.cpp)

#add_executable(Primes ${MAIN})
add_executable(runTests ${SOURCE_FILES} ${TEST_FILES})
target_link_libraries(runTests CppUTest CppUTestExt)
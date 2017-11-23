cmake_minimum_required(VERSION 3.8)
project(Reversi__Test)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lpthread")

add_subdirectory(gtest_src)

include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)



set(SOURCE_FILES include/Player.h src/Cell.cpp include/Cell.h src/Board.cpp include/Board.h include/GenralDef.h include/GameRules.h src/Point.cpp include/Point.h include/Printer.h src/ConsolePrinter.cpp include/ConsolePrinter.h src/HumanPlayer.cpp include/HumanPlayer.h src/ReversiDefaultRules.cpp include/ReversiDefaultRules.h src/GameManager.cpp include/GameManager.h
        src/AIPlayer.cpp include/AIPlayer.h src/GameState.cpp include/GameState.h test/PointTest.cpp test/ReversiLogicTest.cpp test/BoardTest.cpp test/GameStateTest.cpp test/gtest_main.cpp)

include_directories(include gtest_src/include ${gtest_src}/include ${gtest_src})



add_executable(Reversi__Test ${SOURCE_FILES} test/BoardTest.cpp test/GameStateTest.cpp test/PointTest.cpp
        test/ReversiLogicTest.cpp)

target_link_libraries(Reversi__Test gtest gtest_main gmock)
add_test(Reversi__Test Reversi__Test)


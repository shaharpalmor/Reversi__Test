cmake_minimum_required(VERSION 3.8)
project(Reversi__Test)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES include/Player.h src/Cell.cpp include/Cell.h src/Board.cpp include/Board.h include/GenralDef.h include/GameRules.h src/Point.cpp include/Point.h include/Printer.h src/ConsolePrinter.cpp include/ConsolePrinter.h src/HumanPlayer.cpp include/HumanPlayer.h src/ReversiDefaultRules.cpp include/ReversiDefaultRules.h src/GameManager.cpp include/GameManager.h
        src/AIPlayer.cpp include/AIPlayer.h src/GameState.cpp include/GameState.h src/main.cpp test/PointTest.cpp test/ReversiLogicTest.cpp test/BoardTest.cpp)
include_directories(include gtest_src/include)



add_subdirectory(gtest_src)
enable_testing()
include_directories(${gtest_src}/include ${gtest_src})



add_executable(Reversi__Test ${SOURCE_FILES})
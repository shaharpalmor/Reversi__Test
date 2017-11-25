cmake_minimum_required(VERSION 3.8)
project(Reversi__Test)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lpthread")

add_subdirectory(gtest_src)

include_directories(include gtest_src/include ${gtest_src}/include ${gtest_src})

set(SOURCE_FILES include/Player.h src/Cell.cpp include/Cell.h src/Board.cpp include/Board.h
        include/GenralDef.h include/GameRules.h src/Point.cpp include/Point.h include/Printer.h
        src/ConsolePrinter.cpp include/ConsolePrinter.h src/HumanPlayer.cpp include/HumanPlayer.h
        src/ReversiDefaultRules.cpp include/ReversiDefaultRules.h src/GameManager.cpp include/GameManager.h
        src/AIPlayer.cpp include/AIPlayer.h src/GameState.cpp include/GameState.h)

set(TEST_FILES test/PointTest.cpp test/ReversiLogicTest.cpp
        test/BoardTest.cpp test/GameStateTest.cpp)


add_executable(Reversi ${SOURCE_FILES} src/main.cpp)
add_executable(Reversi__Test ${SOURCE_FILES} ${TEST_FILES} test/gtest_main.cpp)

target_link_libraries(Reversi__Test gtest gtest_main gmock)

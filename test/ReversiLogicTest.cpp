// Created by Shahar Palmor on 21/11/17.
// ID 307929927

#include <HumanPlayer.h>
#include "gtest/gtest.h"
#include <algorithm>

TEST(ReversiDefaultRulesTest, checkLoyalPoints) {
    Point outOfBoundPoint(100, 100);
    Point occupiedCellPoint(4, 3);
    Point isDefenetlyInBoardPoint(2, 2);
    Board *board1 = new Board(8, 8);
    ReversiDefaultRules reversiDefaultRules1;
    GameState gameState1(board1);
    owner symbol = PLAYER_1;

    EXPECT_TRUE(reversiDefaultRules1.makeMove(gameState1, occupiedCellPoint, symbol) == OCCUPIED_CELL);
    EXPECT_TRUE(reversiDefaultRules1.makeMove(gameState1, outOfBoundPoint, symbol) == OUT_OF_BOUND);
}

TEST(ReversiDefaultRulesTest, checkVectorInRversi) {
    ReversiDefaultRules *reversiDefaultRules = new ReversiDefaultRules();

    Board *board = new Board(4, 4);
    GameState gameState(board);

    vector<Point *> rightVector;
    Point p1(0, 1);
    Point p2(1, 0);
    Point p4(3, 2);
    Point p3(2, 3);

    rightVector.push_back(&p1);
    rightVector.push_back(&p2);
    rightVector.push_back(&p3);
    rightVector.push_back(&p4);

    vector<Point *> possibleMoves = reversiDefaultRules->makePossibleMoves(gameState, PLAYER_1);

    EXPECT_TRUE(gameState.compare2Vectors(rightVector, possibleMoves));
        delete (reversiDefaultRules);
    }

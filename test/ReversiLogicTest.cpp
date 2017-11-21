// Created by Shahar Palmor on 21/11/17.
// ID 307929927

#include <HumanPlayer.h>
#include "gtest/gtest.h"
#include "ReversiDefaultRules.h"
#include "GenralDef.h"

TEST(ReversiDefaultRulesTest,checkLoyalPoints){
    Point outOfBoundPoint(100,100);
    Point occupiedCellPoint(4,3);
    Point isDefenetlyInBoardPoint(2,2);
    Board board1(8,8);
    ReversiDefaultRules reversiDefaultRules1;
    GameState gameState1;
    owner symbol = PLAYER_1;

    EXPECT_TRUE(reversiDefaultRules1.makeMove(gameState1,occupiedCellPoint,symbol) == OCCUPIED_CELL);
    EXPECT_TRUE(reversiDefaultRules1.makeMove(gameState1,outOfBoundPoint,symbol) == OUT_OF_BOUND);
}

TEST(ReversiDefaultRulesTest,checkVectorInRversi){
    GameState gameState1;
    Board board1(8,8);
    vector<Point> vec1;
    Point p1(1,2);
    Point p2(2,2);
    vec1.push_back(p1);
    vec1.push_back(p2);

    vector<Point> vec2;
    Point p3(1,3);
    Point p4(2,3);
    vec1.push_back(p1);
    vec1.push_back(p2);
}
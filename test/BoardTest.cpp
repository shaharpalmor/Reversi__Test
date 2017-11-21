// Created by Shahar Palmor on 21/11/17.
// ID 307929927

#include "gtest/gtest.h"
#include "Board.h"


TEST(BoardTest,CheckBoard){

    Point outOfBoundPoint(100,100);
    Point isDefenetlyInBoardPoint(2,2);
    Board board1(8,8);

    EXPECT_TRUE(board1.isInBoard(isDefenetlyInBoardPoint));
    EXPECT_FALSE(board1.isInBoard(outOfBoundPoint));
    EXPECT_TRUE(board1.getRow() == 8);
    EXPECT_TRUE(board1.getCol() == 8);
}
// Created by Shahar Palmor & Elad Aharonon 21/11/17.
// ID 307929927 311200786

#include "gtest/gtest.h"
#include "Board.h"


/**
 * checking the validity of the board, by the correct row and col.
 */
TEST(BoardTest,CheckBoard){

    Point outOfBoundPoint(100,100);
    Point isDefenetlyInBoardPoint(2,2);
    Board board1(8,8);

    EXPECT_TRUE(board1.isInBoard(isDefenetlyInBoardPoint));
    EXPECT_FALSE(board1.isInBoard(outOfBoundPoint));
    EXPECT_TRUE(board1.getRow() == 8);
    EXPECT_TRUE(board1.getCol() == 8);
}
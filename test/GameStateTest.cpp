
// Created by Elad Aharon & Shahar Palmor on 21/11/17.
// ID: 311200786 307929927
//

#include "gtest/gtest.h"
#include "GameState.h"

/**
 * checking the copy constructor of game state, by checking a specific cell.
 */
TEST(TestGameState, TestEquallty) {
    Board *b1 = new Board(4, 4); // Gamestate destructor will delete the board.
    GameState g1(b1);
    Point p1(0, 0);

    GameState g2(g1);

    b1->getCell(p1).setSymbol(PLAYER_1);

    Cell g2Cell = g2.getBoard()->getCell(p1);
    EXPECT_FALSE(g2Cell.getSymbol() == PLAYER_1);
}

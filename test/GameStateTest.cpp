
// Created by Elad Aharon on 21/11/17.
// ID: 311200786
//

#include "gtest/gtest.h"
#include "GameState.h"


TEST(TestGameState, TestEquallty) {
    Board b1(4, 4);
    GameState g1(&b1);
    Point p1(0, 0);

    GameState g2(g1);

    b1.getCell(p1).setSymbol(PLAYER_1);


}

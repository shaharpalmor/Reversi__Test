
// Created by Elad Aharon & Shahar Palmor on 21/11/17.
// ID: 311200786 307929927

#include "gtest/gtest.h"
#include "Point.h"


TEST(TestPoint, TestEquallty) {
    Point p1(-1, 0);
    Point p2(0, -1);
    Point p3(-1, 0);
    EXPECT_FALSE(p1.isEqual(p2));
    EXPECT_TRUE(p1.isEqual(p3));
}

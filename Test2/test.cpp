#include "pch.h"
#include "../Task2/header.h"

TEST(Circle, inRange) {
	point Point;
	Point.x = 0;
	Point.y = 0;
	EXPECT_EQ(isInteract(Point), true);
}

TEST(Circle, outOfRange) {
	point Point;
	Point.x = 81;
	Point.y = 81;
	EXPECT_EQ(isInteract(Point), false);
}

TEST(Circle, OnBorder) {
	point Point;
	Point.x = 80;
	Point.y = 0;
	EXPECT_EQ(isInteract(Point), true);
}

TEST(LessZero, outOfRange) {
	point Point;
	Point.x = -81;
	Point.y = 0;
	EXPECT_EQ(isInteract(Point), false);
}


TEST(LessZero, OnBorder) {
	point Point;
	Point.x = -80;
	Point.y = 0;
	EXPECT_EQ(isInteract(Point), true);
}

TEST(InMiddle, UpperRight) { // We need to find point that crosses a border line not when y = 0 
	point Point;
	Point.x = sqrt(3200);
	Point.y = sqrt(3200);
	EXPECT_EQ(isInteract(Point), true);
}
#include <math.h>
#include <iostream>
#include <time.h>
#include "header.h"

int LessZero() { //Random Numbers with '-' sing 
	int sing = rand() % 2;
	if (sing == 0) {
		sing = -1;
	}
	return sing;
}

bool isInteract(point Point) {
	int circleR = 80;

	int h = sqrt(pow(Point.x, 2) + pow(Point.y, 2)); //Counting hypotenyse to zero point

	if (h <= circleR) {
		std::cout << Point.x << " " << Point.y << std::endl;
		return true;
	}
	return false;
}
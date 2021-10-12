#include <math.h>
#include <iostream>
#include <time.h>
#include "header.h"


int main() {
	srand(time(NULL));


	point* random;

	int n;
	std::cin >> n;
	random = new point[n];

	for (int i = 0; i < n; i++) {
		random[i].x = rand() % 100 * LessZero();
		random[i].y = rand() % 100 * LessZero();
		isInteract(random[i]);
	}

	return 0;
}
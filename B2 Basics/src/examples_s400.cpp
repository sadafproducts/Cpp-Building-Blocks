#include <iostream>
#include <cstdlib>	// For random number gen
#include <ctime>	// For random number gen
#include "examples_s400.h"

void example_401() {
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << " Example 401 Histogram of rand on a 10-unit Line";
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "Note: static_cast<int16_t>\n";

	srand(time(NULL));
	char r; // int8_t r;
	char result[11]; //{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; int8_t
	for (int i = 0; i < 11; ++i)
		result[i] = 0;

	for (int i = 0; i < 1000; ++i) {
		r = rand() % 10;
		//std::cout << (int)r << "\n";
		switch (r) {
		case 0:		result[0]++;	break;
		case 1:		result[1]++;	break;
		case 2:		result[2]++;	break;
		case 3:		result[3]++;	break;
		case 4:		result[4]++;	break;
		case 5:		result[5]++;	break;
		case 6:		result[6]++;	break;
		case 7:		result[7]++;	break;
		case 8:		result[8]++;	break;
		case 9:		result[9]++;	break;
		case 10:	result[10]++;	break;
		}
	}
	for (int i = 0; i < 11; ++i) {
		//std::cout << static_cast<int16_t>(result[i]) << "\v";
		std::cout << (int)(result[i]) << " ";
	}
}
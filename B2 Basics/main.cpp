#include <iostream>
#include <limits>   // To clear what is left over in cin buffer

#include "src/myHeaderList.h"

void showExampleList() {
	std::cout << "\nHere are the list of Examples\n";
	std::cout << "\n";
	std::cout << " Example 101 Size of data types \t\t(2020-09-27)\n";
	std::cout << " Example 102 Memory address size \t\t(2020-09-27)\n";
	std::cout << " Example 103 How does int round numbers \t(2020-09-27)\n";
	std::cout << "\n";
	std::cout << " Example 201 Big and Little Endian \t\t(2020-09-27)\n";
	std::cout << " Example 202 Factorial easy way \t\t(2020-09-27)\n";
	std::cout << " Example 203 Probabilty of 50 head out of 100 coins \t(2020-09-27)\n";
	std::cout << "\n";
	std::cout << " Example 301 Template functions \t\t(2020-09-27)\n";
	std::cout << "\n";
	std::cout << " Example 401 Histogram of rand in 10 cm \t(2020-09-27)\n";
}

void showMenu() {
	std::cout << "\n=============================================\n";
	std::cout << "                    MENU                    ";
	std::cout << "\n=============================================\n";
	std::cout << "  0: Exit\n";
	std::cout << "  1: Help\n";
	std::cout << "  101-999: Example numbers\n";
	std::cout << "  Enter an Example number = ";
}

int main() {
	std::cout << "\n\tC++ Tutorials - Basics\n";
	std::cout << "\n\tNOTE: First, check your x86/x64 setting. Some functionalities may differ\n";
	std::cout << "\to You can find basic and short examples of C++ here.\n";
	std::cout << "\to I tried to put few comments as you run the examples.\n";

	showExampleList();

	short int exampleSelector = 0;

	do {
		showMenu();

		if (std::cin >> exampleSelector) {

			switch (exampleSelector) {
			case 0:												return 0;
			case 1:			showExampleList();								break;
			case 101:		example_101();						break;
			case 102:		example_102();						break;
			case 103:		example_103();						break;
			case 201:		example_201();						break;
			case 202:		example_202();						break;
			case 203:		example_203();						break;
			case 301:		example_301();						break;
			case 401:		example_401();						break;
			default:		std::cout << "No example found!\n";	break;
			}

		}
		else {
			std::cout << "Warning: Not a valid input!\n";
			showExampleList();
			exampleSelector = -1; //Otherwise it becomes 0 and it exits the program
			std::cin.clear();
			std::cin.ignore(std::numeric_limits < std::streamsize > ::max(), '\n');
		}

	} while (exampleSelector != 0);

	std::cin.get();
	return 0;
}
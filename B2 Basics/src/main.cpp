#include <iostream>
#include "myHeaderList.h"

int main() {
	short int item = 0;

	do {
		std::cout << "\n===============\n     MENUE     \n===============\n";
		std::cout << "0: Exit\n0-999: functiion Number\n";
		std::cout << "Please enter a functoin number = ";
		std::cin >> item;
		
		switch (item) {
		case 0:
			return 0;
		case 1:
			f001_memorySize();
			break;
		case 2:
			//f002_();
			break;
		}

	} while (item != 0);

	std::cin.get();
	return 0;
}
#include <iostream>
#include <vector>
#include "examples_s300.h"

template<typename T>
T Add(T a, T b) {
	return a + b;
}

template<typename T>
T Max(T a, T b) {
	return (a < b) ? b : a;
}

void example_301() {
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << " Example 301 Template functions \t(2020-09-27)";
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

	std::vector<int> v;
	v = { 1, 2, 5, 3 };
	for (auto i : v)
		std::cout << i << ' ';
	std::cout << '\n';

	std::cout << "5 + 4 = " << Add(5, 4) << "\n";
	std::cout << "5.5 + 4.5 = " << Add(5.5, 4.5) << "\n";
	std::cout << "max: 5 or 4 : " << Max(5, 4) << "\n";
	std::cout << "max: A or B : " << Max('A', 'B') << "\n";
	std::cout << "max: A or B : " << Max("A", "B") << "\n";
	std::cout << "max: A1 or A2 : " << Max("A3", "A4") << "\n";
	std::cout << "max: A1 or A2 : " << Max('Z', 'R') << "\n";
	std::cout << "max: A1 or A2 : " << Max('ZA', 'ZR') << "\n";
	std::cout << "max: A1 or A2 : " << Max("ZA", "ZR") << "\n";

	std::cin.get();
}
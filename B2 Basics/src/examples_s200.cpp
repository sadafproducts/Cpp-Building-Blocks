#include <iostream>
#include "examples_s200.h"

short int big_to_little_Endinan(short int x) {
	//std::cout << "value in dec: " << x << "\n";
	//std::cout << "value in hex: " << std::hex << x << "\n";
	//std::cout << "Most Sig Byte " << std::hex << (x&0xFF00) << "\n";
	//std::cout << "Least Sig Byte " << std::hex << (x&0x00FF) << "\n";

	//short int MSB, LSB, combined;
	//LSB = (x & 0x00FF) << 8;
	//MSB = (x & 0xFF00) >> 8;
	//std::cout << "Move LSB to left: (x & 0x00FF) << 8, that returns " << std::hex << LSB << "\n";
	//std::cout << "Move MSB do right: (x & 0xFF00) >> 8, that returns " << std::hex << MSB << "\n";
	//combined = LSB + MSB;
	//std::cout << "moved LSB + moved MSB: " << std::hex << combined << "\n";

	return ((x & 0x00FF) << 8) + ((x & 0xFF00) >> 8);	
}

void example_201() {
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout <<   "Example 201: Big and little endian";
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	
	short int a = 0xABCD;
	std::cout << "This convers big-endian " << std::hex << a << " in hex to little endian: " << big_to_little_Endinan(a) << "\n";	
	std::cout << "Note: Big Endian (BE): Human way: Most-sig byte is placed in lower memory address.\n";
	std::cout << "Note: Little Endian (LE): Computer Way: Least-sig byte is placed in lower memory address.\n";
	std::cout << "Note: BE: internet protocol\n";
	std::cout << "Note: Little Endian (LE): easy expansion of 32bit to 64bit representatoin.\n";
	std::cout << "Note: x86 and x64 and Microchip microcontrollers are in little endian\n";
}

namespace muhammad
{
	long long int factorial(long long int n) {
		return (n == 0) || (n == 1) ? 1 : n * factorial(n - 1);
	}

	float probability_mass_functoin(char k, char n, float p) {
		
		//return (factorial(n) / (factorial(k) * factorial(n - k))) * pow(p, k) * pow(1 - p, n - k);
		//return (factorial(n) / (factorial(k) * factorial(n - k)));
		int r = (int)n;
		std::cout << " n is " << n << " or " << r << "\n";
		std::cout << "factorial(n) is " << factorial(n) << "\n";
		std::cout << "factorial((int)n) is " << factorial(r) << "\n";
		std::cout << "(float)factorial((int)n) is " << (float)factorial((int)n) << "\n";
		std::cout << " n is " << n << " or " << (int)n << "\n";

		return (float)factorial((int)n);
		//return 777;
	}
}

void example_202() {
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "Example 202: Factorial";
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	int a;
	std::cout << "\nEnter a number to compute factorial: ";
	std::cin >> a;
	std::cout << "Factorial(" << a <<") = " << muhammad::factorial(a) << "\n";
}

void example_203() {
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "Example 203: Binomial Probability";
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	short int total = 50;
	short int number_of_heads = 30;
	std::cout  << "There are total 100 coin flips, enter how many heads exatly you want, then I will compute its probability: ";
	std::cin >> number_of_heads;
	std::cout << "The probability of getting exactly "<< number_of_heads << " successes in " << total << " independent Bernoulli trials is: " << muhammad::probability_mass_functoin (number_of_heads, total, 0.5) << "\n";
}

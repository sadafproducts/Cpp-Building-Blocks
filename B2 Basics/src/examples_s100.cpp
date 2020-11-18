#include <iostream>
#include "examples_s100.h"
//#include <float.h>

void example_101(){
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "    Example 101: Data Type   ";
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "Question: What are the sizes of char, int, float, and double?\n\n";
	std::cout << "Answer: Use sizeof(int)\n";
	std::cout << "Note: This depends on IDE x86/x64 setting (select yours using the field next to the Start Buttom)\n";

	std::cout << "\nSizeof()\tbits\tBytes\n";
	std::cout <<   "-----------------------------\n";
	std::cout << "bool\t\t" << sizeof(bool) * 8 << "\t" << sizeof(bool) << "\n";
	std::cout << "char\t\t" << sizeof(char) * 8 << "\t" << sizeof(char) << "\n";
	std::cout << "short int\t" << sizeof(short int) * 8 << "\t" << sizeof(short int) << "\n";
	std::cout << "int\t\t" << sizeof(int) * 8 << "\t" << sizeof(int) << "\tMax Value Unsigned = " << UINT_MAX << "\n";
	std::cout << "long int\t" << sizeof(long int) * 8 << "\t" << sizeof(long int) << "\tMax Value Unsigned = " << ULONG_MAX << "\n";
	std::cout << "long long int\t" << sizeof(long long int) * 8 << "\t" << sizeof(long long int) << "\tMax Value Unsigned = " << ULLONG_MAX << "\n";
	std::cout << "double\t\t" << sizeof(double) * 8 << "\t" << sizeof(double) << "\tMax Value Unsigned = " << DBL_MAX << "\n";
	std::cout << "long double\t" << sizeof(long double) * 8 << "\t" << sizeof(long double) << "\tMax Value Unsigned = " << LDBL_MAX << "\n";
	
	std::cout << "\nFloating Point\tMin\t\tMax\t\tMin(abs)\n";
	std::cout << "-----------------------------\n";
	std::cout << "Float (single)\t" << -FLT_MAX << "\t" << FLT_MAX << "\t" << FLT_MIN << "\n";
	std::cout << "Double\t\t" << -DBL_MAX << "\t" << DBL_MAX << "\t" << DBL_MIN << "\n";
	std::cout << "Long Double\t" << -LDBL_MAX << "\t" << LDBL_MAX << "\t" << LDBL_MIN << "\n";
	
	std::cout << "\nFloat min neg = " << std::numeric_limits<float>::lowest() << "\n";

	float        x = 3.14159264351134890172;
	double       y = 3.14159264351134890172;
	long double  z = 3.14159264351134890172;
	long double  z2 = 3.14159264351134890172L;

	printf("%f\n", x);
	printf("%f\n", y);
	printf("%f\n", z);
	printf("%.20f\n", x);
	printf("%.20f\n", y);
	printf("%.20f\n", z);	printf("%.lf\n", z); printf("%lf\n", z); printf("%Lf\n", z2);
	std::cout << z2 << "\n";
	
	printf("FLT_RADIX         %d\n", FLT_RADIX);  // Almost always 2
	printf("DBL_MANT_DIG      %d\n", DBL_MANT_DIG);
	printf("LDBL_MANT_DIG     %d\n", LDBL_MANT_DIG);
	printf("DBL_DIG           %d\n", DBL_DIG);
	printf("LDBL_DIG          %d\n", LDBL_DIG);

	/*
		CHAR_BIT = number of bits in a char
		SCHAR_MIN = minimum value for a signed char
		SCHAR_MAX = maximum value for a signed char
		UCHAR_MAX = maximum value for an unsigned char
		CHAR_MIN = minimum value for a char
		CHAR_MAX = maximum value for a char
		MB_LEN_MAX = maximum multibyte length of a character accross locales
		SHRT_MIN = minimum value for a short
		SHRT_MAX = maximum value for a short
		USHRT_MAX = maximum value for an unsigned short
		INT_MIN = minimum value for an int
		INT_MAX = maximum value for an int
		UINT_MAX = maximum value for an unsigned int
		LONG_MIN = minimum value for a long
		LONG_MAX = maximum value for a long
		ULONG_MAX = maximum value for an unsigned long
		LLONG_MIN = minimum value for a long long
		LLONG_MAX = maximum value for a long long
		ULLONG_MAX = maximum value for an unsigned long long
		*/

	float value(-std::numeric_limits<float>::max());
	while (value < 0) {
		std::cout << value << '\n';
		value = std::nextafter(value, std::numeric_limits<float>::infinity());
	}
}

void example_102() {
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout <<   " Example 102: Memory Size ";
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "Question: How long is a memory address?\n\n";
	std::cout << "Find the size of a memory address using a pointer\n";
	std::cout << "Note: This depends on IDE x86/x64 setting (select yours using the field next to the Start Buttom)\n";

	char myChar = 'a';
	char *p = &myChar;
	std::cout << "define myChar = 'a'\n";
	std::cout << "define char *p = &myChar\n";
	std::cout << "sizeof(p) returns " << sizeof(p) << " bytes => The platform is " << sizeof(p) * 8 << "-bit.\n";
	std::cout << "(int *)p returns the value inside p aka the address of myChar in hex: " << (int *)p << "\n";
	std::cout << "Your system is 32-bit: If this hex number has 8 units length\n";
	std::cout << "Your system is 32-bit: If this hex number has 16 units length\n";
	std::cout << "sizeof(p) returns " << sizeof(p) << " bytes => The platform is " << sizeof(p) * 8 << "-bit.\n";

	//std::cout << "define char *p = &myChar\n";
	//std::cout << "*p returns " << *p << "\n";
	//std::cout << "p returns " << p << "\n";
	//std::cout << "(int *)p returns " << (int *)p << "\n";
	//std::cout << "Your system is 32-bit: If the length of the above hex number is 8\n";
	//std::cout << "Your system is 64-bit: If the length of the above hex number is 16\n";
	//std::cout << "sizeof(p) returns " << sizeof(p) << " bytes => The platform is " << sizeof(p) * 8 << "-bit.\n";
}

void example_103() {
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << " Example 103: How does int round numbers ";
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	int x1 = 23.3;
	int x2 = 23.9;
	std::cout << "int x1 = 23.3; => x1 =" << x1 << "\n";
	std::cout << "int x2 = 23.9; => x2 =" << x2 << "\n";
}
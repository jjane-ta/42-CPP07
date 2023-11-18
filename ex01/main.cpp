#include <iostream>
#include "iter.hpp"

int main(){
	unsigned int len = 127;
	{
		int *a = new int[len];

		::iter(a, len, ::iterStaticInc);
		::iter(a, len, ::iterPrint);
		std::cout << std::endl;

		delete[] a;
	}
	{
		char *a = new char[len];

		::iter(a, len, ::iterStaticInc);
		::iter(a, len, ::iterPrint);
		std::cout << std::endl;

		delete[] a;
	}
	{
			std::string *a = new std::string[len];

		::iter(a, len, ::iterStaticInc);
		::iter(a, len, ::iterPrint);
		std::cout << std::endl;

		delete[] a;
	}
}
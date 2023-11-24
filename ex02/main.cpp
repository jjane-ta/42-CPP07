#include <iostream>
#include "Array.hpp"

int main()
{
	{
		Array<int> zero;
		std::cout << "Test array zero: " << zero << std::endl << std::endl;

		Array<int> ten(10);
		std::cout << "test array ten with default values: " << ten << std::endl;
		for(size_t i=0;i<ten.size();i++) ten[i] = i;
		std::cout << "test array ten filled with index values: " << ten << std::endl << std::endl;

		Array<int> tenBis(ten);
		std::cout << "test copy constructor tenBis= " << tenBis << std::endl << std::endl;

		Array<int> tenCopy(0);
		tenCopy = ten;
		std::cout << "test copy operator tenCopy= " << tenCopy << std::endl << std::endl;

		for(size_t i=0;i<ten.size();i++) ten[i] += 1;
		for(size_t i=0;i<ten.size();i++) tenBis[i] += 2;
		std::cout << "After modifying:"  << std::endl;
		std::cout << "\tten: " << ten << std::endl;
		std::cout << "\ttenBis: "<< tenBis << std::endl; 
		std::cout << "\ttenCopy: " << tenCopy << std::endl << std::endl;

		try{
			std::cout << "Test index out of bounds: zero[5] throw std::exception." << std::endl;
			zero[5];
			std::cout << "NEVER PRINT";
		} catch(const std::exception & e) {
        std::cout << "exception cached => " << e.what() << std::endl;
    }




		

		// std::cout << " default values= "; ten.print();
		// std::cout << "Array a = ";

		// for(size_t i=0;i<a.size();i++)
		// 	std::cout << a[i];
		// std::cout << std::endl;

		// for(size_t i=0;i<b.size();i++)
		// 	std::cout << b[i];
		// std::cout << std::endl;
		
	}



}
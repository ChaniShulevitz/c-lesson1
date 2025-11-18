// lesson1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calculator.h"
int main()
{
	calculator c(10);
	calculator c1(20, 25);
	std::cout << "the sum is :" << c1.add()<<std::endl;
	std::cout << "the multiple " << c1.mul() << std::endl;
	std::cout << "get number" << c.getNum1() << std::endl;
 
}



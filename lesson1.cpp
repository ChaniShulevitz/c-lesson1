// lesson1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Calculator.h"

int main()
{
    calculator c(10);
    calculator c1(20, 25, 4);

    std::cout << "the sum is: " << c1.add() << std::endl;
    std::cout << "the multiple: " << c1.mul() << std::endl;
    std::cout << "get number: " << c.getNum1() << std::endl;

    
    c1.add_operation('+');
    c1.add_operation('-');
    c1.add_operation('*');
    c1.add_operation('/');

    c1.executeAllOps();

    
    calculator c2 = c1;
    c1.add_operation('*');
    c1.executeAllOps();

    return 0;
}



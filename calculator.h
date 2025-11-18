#pragma once
class calculator
{
private:
	int num1;
	int num2;
public:
	calculator(int num1);
	calculator(int num1,int num2);
    int getNum1();
	int getNum2();
	void setNum1(int num);
	void setNum2(int num);
	int add();
	int add(int number);
	int mul();
};


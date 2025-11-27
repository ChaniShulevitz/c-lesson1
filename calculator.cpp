#include "calculator.h"
#include <iostream>   
#include <algorithm>

using std::cout;
using std::endl;
// גטרים וסטרים
int calculator::getNum1() {
	return num1;
}
int calculator::getNum2() {
	return num2;
}
void calculator::setNum1(int num) {
	this->num1 = num;
}
void calculator::setNum2(int num) {
	this->num2 = num;
}
//קונסטרקטורים
calculator::calculator(int num1) {
	this->num1 = num1;
	this->num2 = 1;
	this->actions = new char[4];

}
calculator::calculator(int num1, int num2, int opsNum):calculator(num1) {
	this->num2 = num2;
	this->opsNum = 0;
}
calculator::calculator(const calculator& other) {
	this->num1 = other.num1;
	this->num2 = other.num2;
	this->opsNum = other.opsNum;
	this->actions = new char[4];
	for (int i = 0; i < opsNum; i++) {
		this->actions[i] = other.actions[i];
	}
}
calculator::~calculator() {
	delete[] actions;
}
//פןנקציות שיעור ראשון
int calculator::add() {
	return this->num1 + this->num2;
}
int calculator::add(int number) {
	return number + this->num1 + this->num2;
}
int calculator::mul() {
	return this->num1 * this->num2;
}

//פונקציות שיעור שני
bool calculator::add_operation(char op) {
	if (opsNum >= 4)
		return false;
	actions[opsNum] = op;
	opsNum++;
	return true;
}
void calculator::executeAllOps() {

	for (int i = 0; i < opsNum; i++) {
		switch (actions[i]) {
		case '+':
			cout << num1 + num2;
			break;
		case '-':
			cout << num1 - num2;
			break;
		case '*':
			cout << num1 * num2;
			break;
		case '/':
			if (num2 == 0)
				cout << "you cant divide by zero";
			else
				cout << num1 / num2;
			break;
		default:
			    cout << "invalid op";
			    break;
		}

	}
}
		




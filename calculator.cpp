#include "calculator.h"

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
calculator::calculator(int num1) {
	this->num1 = num1;
	this->num2 = 1;
}
calculator::calculator(int num1, int num2):calculator(num1) {
	this->num2 = num2;
}
int calculator::add() {
	return this->num1 + this->num2;
}
int calculator::add(int number) {
	return number + this->num1 + this->num2;
}
int calculator::mul() {
	return this->num1 * this->num2;
}

#pragma once

class calculator
{
private:
    int num1;
    int num2;
    char* actions;
    int opsNum = 0;

public:
    
    int getNum1() ;
    int getNum2() ;
    void setNum1(int num);
    void setNum2(int num);

   //הקונסטרקטורים
    calculator(int num1);
    calculator(int num1, int num2, int opsNum);
    calculator(const calculator& other);
    ~calculator();

    //פונקציות שיעור ראשון
    int add();
    int add(int number);
    int mul();
    //פונקציות שיעור שני
    bool add_operation(char op);
    void executeAllOps();
};

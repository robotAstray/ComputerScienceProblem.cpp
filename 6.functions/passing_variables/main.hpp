#include <iostream>

void  calculate(float in1, float in2, char op, float &res);
void  printEquation(float input1, float input2, char operation, float result);

void calculate(float in1, float in2, char op, float &res){
    switch(op){
        case '+': res = in1 + in2;
        break;
        case '-': res = in1 -in2;
        break;
        case '*': res = in1 * in2;
        break;
        case '/': res = in1 / in2;
        break;
        default: std::cout << "operation not permitted";

    }

}

void printEquation(float input1,float input2, char operation, float result)
{
    std::cout<<input1<<" "<<operation<<" "<<input2<<" = "<<result<<"\n";
}
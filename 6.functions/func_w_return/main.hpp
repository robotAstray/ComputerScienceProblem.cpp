#include <iostream>

void printProduct(int m1, int m2, int sum, char operation);


void printEquation(int m1, int m2, int sum, char operation) 
{
    std::cout<<m1<<" "<<operation<<" "<<m2<<" = " <<sum;
}


int sum(int m1, int m2)
{
    return m1 + m2;
}
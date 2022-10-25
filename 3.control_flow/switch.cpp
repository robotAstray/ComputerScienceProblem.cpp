#include <iostream>


int main(){
    float in1, in2, tot;
    char operation;
    std::cout<<"Enter two numbers:\n";
    std::cin>>in1;
    std::cin>>in2;
    std::cout<<"Enter the operation '+','-','*','/':\n";
    std::cin>> operation;
    switch(operation){
        case '+':
        {
            tot = in1+in2;
            break;
        }
        case '-':
        {
            tot = in1-in2;
            break;
        }
        case '*':
        {
            tot = in1*in2;
            break;
        }
        case '/':
        {
            tot = in1/in2;
            break;
        }
        default: 
            std::cout << "Please Enter an operation '+','-','*','/':\n";
    }
      std::cout <<"Result: " << tot << std::endl;
    return 0; 
}
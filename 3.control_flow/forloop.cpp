/*Write a program that asks a user for five numbers.
**Print out the sum and average of the five numbers.
*/

#include <iostream>

int main(){
    float number;
    float sum = 0;
    for (int i=0; i<5; i++){
        std::cout << "Enter a number: "<< std::endl;
        std::cin >> number;
        sum += number;
        std::cout << "Current Sum: "<< sum<<std::endl;
    }
    std::cout << "Sum = "<< sum <<"\n";
    std::cout << "Average = "<< sum/5 <<"\n";
    return 0;

}
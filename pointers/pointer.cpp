/*For this program print for each variable
**print the value of the variable, 
**then print the address where it is stored. 
*/
#include<iostream>
#include<string>

int main()
{
    int givenInt;
    float givenFloat;
    double givenDouble ;
    std::string givenString;
    char givenChar;
    std::cout<< "Enter givenInt " <<std::endl;
    std::cin >> givenInt;
    std::cout<< givenInt<<std::endl;
    std::cout<< &givenInt<<std::endl;

    std::cout<< "Enter givenFloat" <<std::endl;
    std::cin >> givenFloat;
    std::cout<< givenFloat<<std::endl;
    std::cout<< &givenFloat<<std::endl;

    std::cout<< "Enter givenDouble " <<std::endl;
    std::cin >> givenDouble;
    std::cout<< givenDouble<<std::endl;
    std::cout<< &givenDouble<<std::endl;

    std::cout<< "Enter givenString " <<std::endl;
    std::cin >> givenString;
    std::cout<< givenString<<std::endl;
    std::cout<< &givenString<<std::endl;

    std::cout<< "Enter givenChar " <<std::endl;
    std::cin >> givenChar;
    std::cout<< givenChar<<std::endl;
    std::cout<< &givenChar<<std::endl;

    
    return 0;
}

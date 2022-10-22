/*EXERCISE: practice std::cin for strings
**Write a program that prompts two users for their
**name, address, and phone number. 
**Print the information to the console in the following format:
**name
**\/t\/t address
**\/t\/tphone number
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    string Name;
    string Address;
    string Phone;
    cout << "What is your name? ";
    getline (cin, Name);
    cout << "What is your address? ";
    getline (cin, Address);
    cout << "What is your phone number?";
    getline (cin, Phone);
    cout <<Name<<"\n";
    cout << "\t\t"<<Address<<"\n";
    cout << "\t\t"<<Phone<<"\n";
return 0;
}


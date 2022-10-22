#include <iostream>
#include <string>
using namespace std;

int main(){
    string userName;
    cout<< "What is your username? ";
    getline (cin, userName);
    cout << "Hello " << userName <<endl;
    return 0;
}
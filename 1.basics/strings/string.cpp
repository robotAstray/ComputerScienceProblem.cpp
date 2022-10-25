#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    string roomLength;
    string roomWidth;
    float length = 0;
    float width = 0;
    float area;

    cout << "What is the length of your room?";
    getline(cin, roomLength);
    stringstream(roomLength) >> length;
    cout << "What is the width of your room?";
    getline(cin, roomWidth);
    stringstream(roomWidth) >> width;
    area = width * length;
    cout << "The area of your room is " << area <<endl;
    return 0;

}
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string line;
    //create an outputstream to write to file
    //add new line at the end of the file
    ofstream myfileI ("input.txt", ios::app);
    if (myfileI.is_open()){
        myfileI << "\n Adding an extra line for fun.\n";
        myfileI.close();
    } else cout <<"Not able to open the file for writing";
    ifstream myfile0 ("input.txt");
    if (myfile0.is_open()){
        while (getline (myfile0, line)){
            cout << line << "\n";
        }

        myfileI.close();
    }
    else cout << "Unable to open file for reading";
    
    return 0;

}
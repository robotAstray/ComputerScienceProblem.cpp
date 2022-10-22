/*Formatting Output 
**Goal: practice using cout to format output to console
**Print the variables in three columns:
**Ints, Floats, Doubles
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;
    cout<<"Int"<<std::setw(13)<<"Float"<<std::setw(15)<<"Double"<<endl;
    cout<<a<<std::setw(15)<<b<<std::setw(15)<<c<<endl;
    cout<<aa<<std::setw(15)<<bb<<std::setw(15)<<cc<<endl;
    cout<<aaa<<std::setw(15)<<bbb<<std::setw(15)<<ccc<<endl;    
    return 0;
}
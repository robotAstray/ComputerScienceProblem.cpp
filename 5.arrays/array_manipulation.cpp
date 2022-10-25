/*Goal: Practice array manipulation in C++. 
**The user will input 40 integers. 
**Put them into an array. Then print the array in the order the numbers were
**entered. Then print in reverse order. Then sort the array in ascending order 
**and print it. 
**The each print of the array should separate the numbers in the array by
**one space. 
**For example: the array were [3,4,55] the printout would be 3 4 55
*/

#include <iostream>
#include <stdio.h>

int main()
{
    int userInput[40];
    for(int i = 0; i <40; i++)
     {
         scanf("%d", &userInput[i]);
     }
     //print in order 
     std::cout<<"\nThe array\n";
     for (int i = 0; i < 40; i++)
     {
        std::cout << userInput[i]<<" ";
    
     }
     //print in reverse order
      std::cout<<"\n\nThe array in reverse order\n";
    for (int i = 39; i >=0; i--)
     {
        std::cout << userInput[i]<<" ";
    
     }
     //sort array 
     for (int i =0; i < 40; i++){
        for (int j =0; j <39; j++){
            if (userInput[j] > userInput[j +1])
                {
                     int temp;
                     temp=userInput[j];
                     userInput[j]=userInput[j + 1];
                     userInput[j + 1]=temp;
                 }
                
        }
     }
    std::cout<<"\n\nThe array sorted\n";
        for(int i = 0; i< 40; i++)
    {
        std::cout << userInput[i] <<" ";
    }
    return 0;
}
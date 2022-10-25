
/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array 
**and a vector of size 4. 
**Use the dot product to multiply the array by the vector. 
**Print the resulting vector. 
*/

#include<iostream>

int main()
{
    int sum =0;
    int array4Dim[4][4];
    int product[4];
    for (int i=0; i<4;i++){
        for (int j=0; j<4;j++){
            std::cout<< "Enter a number"<<std::endl;
            std::cin >> array4Dim[i][j];
            std::cout<<"array4Dim["<<i<<"]["<<j<<"] = " << array4Dim[i][j]<<"\n";

        }
    }
    int array1Dim[4];
    for (int k = 0; k<4; k++){
        std::cout<<"Enter a number for vector entry "<<k<<std::endl;
        std::cin >> array1Dim[k];
        std::cout << "array1Dim["<<k<<"] = " << array1Dim[k] <<"\n";
    }

    //TODO: multiply a 4x4 array with vector of size 4. 
    //Print the resultant product vector
    for (int i=0;i<4; i++){
         for(int j=0; j<4;j++){
            sum = (array4Dim[i][j] * array1Dim[i]) + sum;

         }
         product[i] = sum;
         sum =0;

    }
    for(int i=0;i<4;i++)
    {
        std::cout<<"product["<<i<<"] = "<<product[i]<<"\n";
    }

    return 0;
}

/*
Compute the volume of a cube, sphere and cone
*/
#include <iostream>
#include <cmath>

int main(){
    //Dimension of the cube
    float cubeSide = 5.4;
    //Dimension of sphere
    float sphereRadius = 2.33;
    //Dimensions of cone
    float coneRadius = 7.65;
    float coneHeight = 14;
    
    float volCube, volSphere, volCone = 0;

    volCube = std::pow(cubeSide, 3);
    std::cout << "The Volume of a cube is " << volCube <<"\n";
    volSphere = std::pow(sphereRadius, 3) * 4/3 * M_PI;
    std::cout << "The Volume of a Sphere is " << volSphere<<"\n";
    volCone = std::pow(coneRadius, 2) * (coneHeight/3)*M_PI;
    std::cout << "The Volume of a Cone is " << volCone<<"\n";
    return 0;
}
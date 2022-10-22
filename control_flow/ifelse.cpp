#include <iostream>

int main(){
    char skin, location;
    std::cout<<"Would you like an animal with fur(f), feathers(t), or scales(s)?";
    std::cin>>skin;
    std::cout<<skin<<"\n";
    if (skin == 'f'){
    std::cout<<"Get a dog"<<"\n";
    }else if(skin == 't'){
    std::cout<<"Get a bird"<<"\n";
    }else{
    if (location == 'w'){
    std::cout<<"Get a fish"<<"\n";       

    }else if (location == 'l'){
    std::cout<<"Get a gecko"<<"\n"; 
    }else{
    std::cout<<"Get a frog"<<"\n"; 
    } 
    }
    return 0;
}
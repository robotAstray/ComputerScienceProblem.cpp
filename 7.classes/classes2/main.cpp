/*Goal: practice creating and using classes.
**Create a class called Cat.
**Create the following members:
**private members: name, breed, age
**public members: setName, setBreed,setAge
**getName, getBreed, getAge, printInfo*/
#include "main.hpp"
Cat cat1, cat2;

int main()
{
cat1.setName("Pixie");
cat2.setName("Trixie");
cat1.setBreed("calicon");
cat2.setBreed("calicon");
cat1.setAge(2);
cat2.setAge(6);

cat1.printInfo();
cout<<"\n\n";
cat2.printInfo();
cout<<"\n\n";
cout<<cat1.getName()<<" "<<cat1.getBreed()<<" "<<cat1.getAge()<<"\n";
cout<<cat2.getName()<<" "<<cat2.getBreed()<<" "<<cat2.getAge();
return 0;
}

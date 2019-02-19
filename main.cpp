#include <cstdlib>
#include <iostream>

using namespace std;

#include "a.h"

#define MAX 3

int main(int argc, char *argv[])
{
Animal *array[MAX];
Animal *ptr;
int i;

array[0] = new Animal(3);
cout << "Array[0] animal age is " << array[0]->getAge() << endl;
array[0]->Speak(); cout << endl;
ptr = array[0]->Clone();
cout << "Clone of Array[0] animal age is " << ptr->getAge() << endl;
ptr->Speak();

array[1] = new Dog(5);
array[2] = new Cat(7);
cout << "Array[1] animal age is " << array[1]->getAge() << endl;
array[1]->Speak(); cout << endl;
cout << "Array[2] animal age is " << array[2]->getAge() << endl;
array[2]->Speak(); cout << endl;
system("PAUSE");

Animal *other[MAX];
for(i = 0; i < MAX; i++){
array[i]->Speak();
cout << "The animals age is " << array[i]->Animal::getAge() << endl;
other[i] = array[i]->Clone();
}
system("PAUSE");
cout << endl;
for(i = 0; i < MAX; i++){
other[i]->Animal::setAge((other[i]->Animal::getAge() + 2));
other[i]->Speak();
cout << "The animals age is " << other[i]->Animal::getAge() << endl;
}
system("PAUSE");

for(i = 0; i < MAX; i++)
delete other[i];

delete ptr;

for(i = 0; i < MAX; i++)
delete array[i];

system("PAUSE");
return EXIT_SUCCESS;
}

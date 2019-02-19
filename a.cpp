/*Animal definition file*/

#include "a.h"
#include <iostream>
using namespace std;

Animal::Animal(int Age): itsAge(Age)
{cout << itsAge << " - Animal Constructor...\n";}
Animal::~Animal(){cout << "Animal Destructor...\n";}
Animal::Animal(const Animal & rhs):itsAge(rhs.getAge())
{cout << itsAge << " - Animal Copy Constructor...\n";}
void Animal::Speak() const{cout << "Animal speak? What kind of animal?\n";}
Animal* Animal::Clone(){return new Animal(*this);}
int Animal::getAge() const{return itsAge;}
void Animal::setAge(int Age) {itsAge = Age;}

Dog::Dog(int Age): Animal(Age)
{cout << Animal::itsAge << " - Dog Constructor...\n";}
Dog::~Dog(){cout << "Dog Destructor...\n";}
Dog::Dog(const Dog & rhs): Animal(rhs)
{cout << Animal::itsAge << " - Dog Copy Constructor...\n";}
void Dog::Speak()const {cout << "Woof! Woof!\n";}
Animal* Dog::Clone(){return new Dog(*this);}

Cat::Cat(int Age): Animal(Age)
{cout << Animal::itsAge << " - Cat Constructor...\n";}
Cat::~Cat(){cout << "Cat Destructor...\n";}
Cat::Cat(const Cat & rhs): Animal(rhs)
{cout << Animal::itsAge << " - Cat Copy Constructor...\n";}
void Cat::Speak()const {cout << "Meow! Meow!\n";}
Animal* Cat::Clone(){return new Cat(*this);}

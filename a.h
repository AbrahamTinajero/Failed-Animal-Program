#ifndef ANIMAL_H
#define ANIMAL_H
class Animal{
protected:
int itsAge;
public:
Animal(int Age);
virtual ~Animal();
Animal(const Animal & rhs);
virtual void Speak() const;
virtual Animal* Clone();
virtual int getAge() const;
virtual void setAge(int Age);
};

class Dog : public Animal{
public:
Dog(int Age);
virtual ~Dog();
Dog(const Dog & rhs);
virtual void Speak() const;
virtual Animal* Clone();
};

class Cat : public Animal{
public:
Cat(int Age);
virtual ~Cat();
Cat(const Cat & rhs);
virtual void Speak() const;
virtual Animal* Clone(); 
};
#endif

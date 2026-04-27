// Assignment-13 P13.2
// Demonstration of virtual function (runtime polymorphism)

#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound() const
    {
        cout << "Animal makes a sound." << endl;
    }
};

class Dog : public Animal
{
public:
    void sound() const override
    {
        cout << "Dog barks: Woof Woof!" << endl;
    }
};

class Cat : public Animal
{
public:
    void sound() const override
    {
        cout << "Cat meows: Meow!" << endl;
    }
};

int main()
{
    Animal *ptr;
    Dog d;
    Cat c;

    cout << "Using base class pointer with Dog object:" << endl;
    ptr = &d;
    ptr->sound();

    cout << "\nUsing base class pointer with Cat object:" << endl;
    ptr = &c;
    ptr->sound();

    return 0;
}

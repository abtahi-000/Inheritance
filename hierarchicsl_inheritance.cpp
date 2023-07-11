#include<iostream>
using namespace std;

class Animal
{
public:
    void display()
    {
        cout << "i am an animal  " ;
    }
};

class Dog : public Animal
{
public:
    void displaydog()
    {
        cout << " and also i am a dog" << endl;
    }
};

class Cat : public Animal
{
public:
    void displaycat()
    {
        cout << " and also i am a cat" << endl;
    }
};

int main()
{
    Dog d;
    d.display();
    d.displaydog();

    Cat c;
    c.display();
    c.displaycat();

    return 0;
}

#include<iostream>
using namespace std;

class Animal
{
    public:

    void eat()
    {
        cout<<"\n\nThe Animal can eat\n";
    }

    void sleep()
    {
        cout<<"All the animal can sleep\n";
    }

};

class Dog : public Animal
{
    public:

    void bark()
    {
        cout<<"The dog can bark\n";
    }

};

int main()
{

    Dog obj;

    obj.eat();
    obj.sleep();
    obj.bark();

    return 0;
}
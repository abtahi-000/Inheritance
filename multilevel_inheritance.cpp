#include<iostream>
using namespace std;

class A
{
    public:
        
        void eat()
        {
            cout << "I can eat\n";
        }
};

class B : public A
{
    public:
        void food_item()
        {
            cout << "1. Banana\n";
        }

};

class C : public B
{
    public:
        void show()
        {
            cout << "Multilevel inherited successfully.........\n";
        }

};

int main()
{   
    A obj1;
    obj1.eat(); // only have one function in class A
    
    B obj2;
    obj2.eat(); //inherited from class A
    obj2.food_item(); // own function of class B


    C obj3;
    obj3.eat(); //inherited from class A to B,then class B to C
    obj3.food_item(); //inherited from class B
    obj3.show();  //own function of class C

    return 0;
}
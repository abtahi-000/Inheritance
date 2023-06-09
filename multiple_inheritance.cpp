#include<iostream>
using namespace std;

class Father
{
    public:
        void eyes()
        {
            cout << "\n \nFather's eyes are Black" << endl;
        }
};

class Mother
{
    public:
        void hair()
        {
            cout << "Mother's hairs are Black\n" ;
        }
};

class Children : public Father, public Mother
{
    public:
        void character()
        {
            cout << "Ther parental characteristics are inherited" << endl;
            cout << "This is multiple inheritance example\n \n" << endl;
        }

};

int main()
{

    Children obj;

    obj.eyes();
    obj.hair();
    obj.character();

    return 0;
}
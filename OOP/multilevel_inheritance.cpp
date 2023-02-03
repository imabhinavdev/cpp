#include <iostream>
using namespace std;
class baseClass
{

public:
    baseClass()
    {
        cout << "Base 1 constructor is called." << endl;
    }
};

class derviedClass01 : public baseClass // This class is inherited by base class.
{

public:
    derviedClass01()
    {
        cout << "Base 2 constructor is called." << endl;
    }
};

class derivedClass2 : public derviedClass01 // This class is inherited by derived class 01
{

public:
    derivedClass2()
    {
        cout << "Derived Constructor is called." << endl;
    }
};
int main()
{

    derivedClass2 object; // Object of only Derived class 02
}
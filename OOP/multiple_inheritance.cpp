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

class baseClass02
{

public:
    baseClass02()
    {
        cout << "Base 2 constructor is called." << endl;
    }
};

class derivedClass2 : public baseClass, public baseClass02 // Inherited two classes.
{

public:
    derivedClass2()
    {
        cout << "Derived Constructor is called." << endl;
    }
};
int main()
{

    derivedClass2 object; // Object of only Derived class is created but base class constructor is also called.
}
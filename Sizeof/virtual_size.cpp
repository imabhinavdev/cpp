#include <iostream>
using namespace std;
class Base
{
public:
    virtual void show()
    {
        int data;
        cout << "This is a base class." << endl;
    }
};

class Derived1 : public Base
{
public:
    void show()
    {
        int data1;

        cout << "This is 1 Derived class" << endl;
    }
};

int main()
{
    Derived1 obj;
    Base b1;
    cout << sizeof(obj) << endl;
    obj.show();
}

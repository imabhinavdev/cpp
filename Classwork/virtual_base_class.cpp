#include <iostream>
using namespace std;

class D1
{

public:
    int a, area1;
    void getA()
    {
        cout << "Enter value of a:- ";
        cin >> a;
    }
    void area()
    {
        area1 = a * a;
    }
};

class D2 : public virtual D1
{
public:
    void show()
    {
        cout << "The is  class D1. Area is " << area1 << endl;
    }
};

class D3 : public virtual D1
{
public:
    void show1()
    {
        cout << "this is class D2. Area is " << area1 << endl;
    }
};

class D4 : public D2, public D3
{
public:
};

int main()
{
    D4 obj;
    obj.getA();
    obj.area();
    obj.show();
    obj.show1();
}
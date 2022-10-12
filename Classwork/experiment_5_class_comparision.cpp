// WAP to find grater no. out of two classes using friend function.
#include <iostream>
using namespace std;

class Class1
{
    int x;
    friend void Fun1();
};
class Class2
{
    int x;
    friend void Fun1();
};

void Fun1()
{
    Class1 c1;
    Class2 c2;
    cout << "Enter number of class 1- ";
    cin >> c1.x;
    cout << "Enter number of class 2- ";
    cin >> c2.x;
    if (c1.x > c2.x)
    {
        cout << c1.x << " is greater of class1";
    }

    else if (c1.x == c2.x)
    {
        cout << "Both are same ";
    }
    else
    {
        cout << c2.x << " is greater";
    }
}
int main()
{
    Fun1();
}
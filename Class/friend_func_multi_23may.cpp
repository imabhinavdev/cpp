#include <iostream>
using namespace std;
class Distance2;
class Distance1
{
private:
    int feet, inch;

public:
    Distance1()
    {
        cout << "Enter Distance in feet and inches:- ";
        cin >> feet >> inch;
    }
    friend void adddata(Distance1 &obj1, Distance2 &obj2);
};
class Distance2
{
private:
    int feet, inch;

public:
    Distance2()
    {
        cout << "Enter Distance in feet and inches:- ";
        cin >> feet >> inch;
    }
    friend void adddata(Distance1 &obj1, Distance2 &obj2);
};
void adddata(Distance1 &obj1, Distance2 &obj2)
{
    int I, F;
    F = obj1.feet + obj2.feet;
    I = obj1.inch + obj2.inch;

    while (I >= 12)
    {
        F++;
        I = I - 12;
    }
    cout << "The sum is :- " << F << " feet " << I << " inches\n";
}

int main()

{
    Distance1 d1;
    Distance2 d2;
    adddata(d1, d2);
}
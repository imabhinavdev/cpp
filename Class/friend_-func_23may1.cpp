/*WAP to create a class name Distance.
Create two objects. Find sum of both Distances.*/
#include <iostream>
using namespace std;

class Distance
{
private:
    int feet, inch;

public:
    Distance()
    {
        cout << "Enter Distance in feet and inches:- ";
        cin >> feet >> inch;
    }
    friend void adddata(Distance &obj1, Distance &obj2)
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
};

int main()

{
    Distance d1, d2;
    adddata(d1, d2);
}
// WAP to calculate volume of box and area of triangle.
#include <iostream>
using namespace std;
class Calc
{
    float vol, area, length, breadth, height;

public:
    void Volume()
    {
        cout << "Enter length of box:- ";
        cin >> length;
        cout << "Enter breadth of box:- ";
        cin >> breadth;
        cout << "Enter height of box:- ";
        cin >> height;
        cout << "Volume is:- " << length * breadth * height;
    }
    void Area()
    {
        cout << "Enter height of triangle:- ";
        cin >> height;
        cout << "Enter base of triangle:- ";
        cout << length;
        cout << "Area is:- " << (.5 * length * height);
    }
};
int main()
{
    Calc c1, c2;
    c1.Volume();
    c2.Area();
}
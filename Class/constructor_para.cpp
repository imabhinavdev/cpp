/* WAP to create a class area of rectangle. Use parameters constructor to
intialize the object and print area and perimeter.*/
#include <iostream>
using namespace std;
class ap
{
private:
    int length, breadth;

public:
    ap(int l, int b)
    {
        length = l;
        breadth = b;
    }

    void area()
    {
        cout << "Area is :- " << length * breadth << "\n";
    }
    void peri()
    {
        cout << "Perimeter is :- " << 2 * (length + breadth);
    }
};

int main()

{
    int in1, in2;
    cout << "Enter length:- ";
    cin >> in1;
    cout << "Enter breadth:- ";
    cin >> in2;
    ap first(in1, in2);
    first.area();
    first.peri();
}
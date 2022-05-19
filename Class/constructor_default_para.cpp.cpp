/*WAP to create a class for complex numbers
use default and parametre construtor to intialize two objects.
Print both complex numbers.*/
#include <iostream>
#include <stdlib.h>
using namespace std;

class Complex
{
private:
    int real, img;

public:
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }

    Complex()
    {
        cout << "Enter real number:- ";
        cin >> real;
        cout << "Enter img number:- ";
        cin >> img;
    }

    void putdata()
    {
        cout << real << " i" << img << "\n";
    }
};

int main()

{
    int in1, in2;
    cout << "Enter real part:- ";
    cin >> in1;
    cout << "Enter img part:- ";
    cin >> in2;
    Complex a1(in1, in2);
    a1.putdata();

    Complex a2;

    a2.putdata();
    system("START www.abhinavsingh.me");
}
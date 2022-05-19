// WAP to create a class for complex numbers.
//(Use scope resolution operator to define the function.)
#include <iostream>

using namespace std;

class complex
{
private:
    int real, img;

public:
    void getdata();

    void putdata();

} s1;

int main()

{
    s1.getdata();
    s1.putdata();
}

void complex::getdata()
{
    cout << "Enter real part:- ";
    cin >> real;
    cout << "Enter img part:- ";
    cin >> img;
}
void complex::putdata()
{
    cout << "Real part: " << real << " Imaginary part: " << img;
}

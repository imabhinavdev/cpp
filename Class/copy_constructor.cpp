#include <iostream>
using namespace std;

class number
{
private:
    int x, y;

public:
    number()
    {
        x = 10;
        y = 20;
    }
    number(int a, int b)
    {
        x = a;
        y = b;
    }

    number(number &obj)
    {
        x = obj.x;
        y = obj.y;
    }
    void putdata()
    {
        cout << "X = " << x << " Y = " << y << "\n";
    }
};

int main()

{
    int in1, in2;
    cout << "Enter two number:- ";
    cin >> in1 >> in2;
    number a, b(in1, in2), c(a);
    a.putdata();
    b.putdata();
    c.putdata();
}
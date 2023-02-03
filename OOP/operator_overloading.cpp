#include <iostream>
using namespace std;

class baseClass
{
private:
    int number;

public:
    void getNumber()
    {
        cout << "Enter number: ";
        cin >> number;
    }

    int operator+(baseClass &obj)

    {
        return (number + obj.number);
    }
};

int main()
{

    baseClass obj1, obj2;
    int Result;
    obj1.getNumber();
    obj2.getNumber();
    Result = obj1 + obj2;
    cout << "Result is " << Result;
}
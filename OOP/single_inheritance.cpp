#include <iostream>
using namespace std;

class baseClass
{
private:
    int age;

public:
    void getAge()
    {
        cout << "Enter your age: ";
        cin >> age;
        cout << "Your age is " << age;
    }
};

class derivedClass : public baseClass
{ // This class is inherited by baseClass.
private:
    string name;

public:
    void getName()
    {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Your name is " << name << endl;
    }
};

int main()
{
    derivedClass object; // Object created of derived class.
    object.getName();
    object.getAge();
}
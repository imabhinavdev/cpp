// Use default constructor and print ditance.
#include <iostream>

using namespace std;
class Distance
{
private:
    int feet, inches;
    // char name[50];

public:
    Distance()
    {
        cout << "Enter feet:- ";
        cin >> feet;
        cout << "Enter inches:- ";
        cin >> inches;
        while (inches >= 12)
        {
            feet++;
            inches = inches - 12;
        }
    }
    void putdata()
    {
        cout << feet << " : " << inches << "\n";
    }
};

int main()

{
    Distance s1, s2;
    s1.putdata();
    s2.putdata();
}
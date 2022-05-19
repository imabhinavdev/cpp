#include <iostream>
#include <stdlib.h>

using namespace std;
class student
{
private:
    char name[50];
    int age;

public:
    void getdata()
    {
        cout << "\nEnter name:- ";
        cin >> name;
        cout << "\nEnter age:- ";
        cin >> age;
    }
    void putdata()
    {
        cout << "\nName is " << name;
        cout << "\nAge is " << age;
    }
};

int main()

{
    student s[2];
    s[0].getdata();
    s[0].putdata();
    s[1].getdata();
    s[1].putdata();
    // system("START www.abhinavsingh.me");
}
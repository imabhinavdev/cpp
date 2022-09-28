// Create a class Student having data memebers roll no,name and percetage as instance data members and count as static data members. The count should represent the number of object created. create a static function which will return the number of objects created.
#include <iostream>
#include <string.h>
using namespace std;
class Student
{
    float roll_no, percentage;
    string name;
    static int count;

public:
    void getData()
    {
        count++;
        cout << "Enter name:- ";
        cin >> name;
        cout << "Enter roll no:- ";
        cin >> roll_no;
        cout << "Percentage:- ";
        cin >> percentage;
    }
    void showData()
    {
        cout << "Name:- " << name << "\n"
             << "Roll no:- " << roll_no << "\n"
             << "Percentage:- " << percentage << "\n";
    }
    static int Counting()
    {
        return count;
    }
};
int Student::count;
int main()
{
    Student s1, s2;
    int number;
    s1.getData();
    s1.showData();
    s2.getData();
    s2.showData();
    number = Student::Counting();
    cout << number;
}
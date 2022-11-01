#include <iostream>
#include <stdlib.h>
using namespace std;
class Student // Class student base class.
{
public:
    int id;
    string name;
    Student() // Constructor for intiliazing value.
    {
        id = 1;
        name = "Abhinav";
    }
};
class exam : public Student // Exam class inherited from Student class.
{
public:
    string exam = "OOP ";
};

class Result : public exam // Result class inherited from Exam class.
{
public:
    float res = 80;
};

int main() // Main function
{
    Result r1;
    cout << "Student name :- " << r1.name << endl;
    cout << "exam name:- " << r1.exam << endl;
    cout << "Result:- " << r1.res << endl;
}
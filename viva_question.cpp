/*Consider an example of declaring the exam result. Design three classes student ,exam,result
The student class has data members such as roll no,names,etc. Create a class exam by inheriting
the student class. The exam class should have data members representing marks scored in 6 subjects.
Derive class result from the exam class and it should have it's own data members such as total
marks. write an interactive program to model this relationship. Which type of inhertiance this
model belongs to ?*/

// Made by Abhinav Singh
//  Date:- 14 December 2022.

#include <iostream>
#include <string>
using namespace std;
class Student
{

public:
    string name;
    int roll_no;

    void getData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter your roll number:- ";
        cin >> roll_no;
    }
};

class Exam : public Student
{
public:
    float ary[6];

    void getMarks()
    {
        for (int i = 0; i < 6; i++)
        {
        Error:
            cout << "Enter subject " << i + 1 << " marks : ";
            cin >> ary[i];
            if (ary[i] > 100)
            {
                cout << "Enter marks under 100 ! " << endl;
                goto Error;
            }
        }
    }
};

class Result : public Exam
{
public:
    float total;
    void getResult()
    {
        system("cls");
        for (int i = 0; i < 6; i++)
        {
            total += ary[i];
        }
        cout << "Name: " << name << endl;
        cout << "Roll no: " << roll_no << endl;
        cout << "The total result is: " << total << "/600" << endl;
        system("pause");
    }
};

int main()
{
Menu:
    system("cls");

    Result r1;
    r1.getData();
    r1.getMarks();
    r1.getResult();
    system("cls");
    cout << "This model belongs to Multilevel type of inheritance." << endl;
    cout << "Do you want to repeat ?\n1.Yes\n2.No\n";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        goto Menu;

    default:
        break;
    }
}
#include <iostream>
#include <conio.h>
using namespace std;
class employeeInfo
{
    char name[50], designation[50];
    int employeCode, employeSalary;

public:
    void newEmployee()
    {
        system("CLS");
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Employee Code: ";
        cin >> employeCode;
        cout << "\nEnter Employee Designation: ";
        cin >> designation;
        cout << "Enter Employee Salary: ";
        cin >> employeSalary;
    }

    void showEmployeeData()
    {
        int check;
        cout << "Employee name: " << name;
        cout << "\n Employee code: " << employeCode;
        cout << "\n Employee designation: " << designation;
        cout << "\n Employee salary: " << employeSalary;
        cout << "\n1.Ok";
        cin >> check;
        cout << "Done";
    }
};
int main()
{
    int choice, n = 1, code;
    employeeInfo E1[50];
Employee:
    // E1[n].newEmployee();
    system("CLS");
    cout << "1.New Employee \t 2.Get details\t3.Exit\n";
    cout << "Enter choice:- ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        E1[n].newEmployee();
        n++;
        goto Employee;
        break;

    case 2:
        cout << "Enter code of employee:- ";
        cin >> code;
        E1[code].showEmployeeData();
        goto Employee;

        break;

    default:
        break;
    }
    return 0;
}

// Wap to create employee class with data members-  id, name,designation and employee salary expecting input from the
// users and display employee data with its net salary through object also define the function.
#include <iostream>
#include <string>
using namespace std;
class Employee
{
    int id, salary, netSalary;
    string name, designation;

public:
    void Getdata()
    {
        system("CLS");
        cout << "Enter employee name:- ";
        cin >> name;
        cout << "Enter Designation:- ";
        cin >> designation;
        cout << "Enter salary:- ";
        cin >> salary;
        cout << "Enter ID to allot:- ";
        cin >> id;
        if (salary <= 250000)
        {
            netSalary = salary;
        }
        else if (salary > 250000 && salary <= 500000)
        {
            netSalary = (salary * .95);
        }
        else if (salary > 500000 && 1000000)
        {
            netSalary = (salary * .8);
        }
        else
        {
            netSalary = (salary * .7);
        }
    }

    void displayData()
    {
        cout << "Name:- " << name << "\n"
             << "Designation:- " << designation << "\n"
             << "Salary:- " << netSalary << "\n"
             << "Id :- " << id;
    }
};
int main()
{
    Employee E1;
    E1.Getdata();
    E1.displayData();
}
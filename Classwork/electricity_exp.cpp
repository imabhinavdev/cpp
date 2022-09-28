//
#include <iostream>
using namespace std;
class Bill
{
    float unit, amount;
    string first_name, last_name;

public:
    Bill()
    {
        system("cls");
        cout << "Enter First name:- ";
        cin >> first_name;
        cout << "Enter last name:- ";
        cin >> last_name;
        cout << "Enter unit consumed:- ";
        cin >> unit;

        if (unit <= 100)
        {
            amount = .6 * unit;
        }
        else if (unit > 100 && unit <= 200)
        {
            amount = .8 * unit;
        }
        else if (unit > 200)
        {
            amount = .92 * unit;
        }

        system("cls");
        cout << "name is:- " << first_name << " " << last_name;
        cout << "\nyour bill amount is:- " << amount;
    }
};
int main()
{
    Bill b;
}

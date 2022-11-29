#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
class Account
{
    float act_no;
    int act_type;
    string name;

public:
    void getDetails()
    {
        cout << "Enter full name of user : " << endl;
        cin >> name;
        cout << "Enter the account type:- \n";
        cout << "1.Saving\n2.Current\n";
        cin >> act_type;
        cout << "Enter account number:- ";
        cin >> act_no;
        Display();
    }

    void Display()
    {
        cout << "Name:- " << name << endl;
        if (act_type == 1)
        {
            cout << "Account type:- Saving";
        }
        else
        {

            cout << "Account type:- current";
        }
        cout << "\nAccount Number:- " << act_no << endl;
        system("pause");
    };
};

class currentAct : public Account
{
    float c_balance = 15000;

public:
    void c_menu()
    {
    Menu:
        system("cls");
        int c_choice;
        cout << "Select any one:- \n";
        cout << "\t1.Deposit\n\t2.Withdraw\n\t3.Check balance\n\t4.Exit";
        cin >> c_choice;
        switch (c_choice)
        {
        case 1:
            c_deposit();
            goto Menu;
        case 2:
            c_Withdraw();
            goto Menu;
        case 3:
            Display();

            cout << "Total amount " << c_balance << endl;
            goto Menu;

        case 4:
            break;
        default:
            goto Menu;
        }
    }

    void c_deposit()
    {
        float amount;
        Display();

        cout << "Enter the amount you want to deposit:- ";
        cin >> amount;
        c_balance += amount;
        cout << "Amount deposited ! " << endl;
        cout << "Total Amount left:- " << c_balance << endl;

        system("pause");
    }

    void c_Withdraw()
    {
        float amount;
        Display();
        cout << "Enter the amount you want to withdraw : ";
        cin >> amount;
        if (c_balance < 1000)
        {
            cout << "Insufficient Balance ! ";
        }
        else
        {
            c_balance = c_balance - amount;
            cout << "Withdraw Successfull ! " << endl;
            cout << "Total Amount left:- " << c_balance << endl;

            system("pause");
        }
    }
};

class savingAct : public Account
{
    float s_balance = 1000;
    int sav_withdraw, choice;

public:
    void s_menu()
    {
    Menu:
        system("cls");
        int c_choice;
        cout << "Select any one:- \n";
        cout << "\t1.Deposit\n\t2.Withdraw\n\t3.Check Balance\n\t4.Exit";
        cin >> c_choice;
        switch (c_choice)
        {
        case 1:
            sDeposit();
            goto Menu;
            break;
        case 2:
            s_Withdraw();
            goto Menu;
            break;
        case 3:
            Display();

            cout << "Total Amount " << s_balance << endl;
            system("pause");
            goto Menu;

        case 4:
            break;

        default:
            goto Menu;
        }
    }
    void sDeposit()
    {
        Display();

        cout << "Enter the amount you want to deposit: " << endl;
        cin >> sav_withdraw;
        s_balance += sav_withdraw;
        cout << "Amount Added successfully ! " << endl;
        cout << "Total Amount left:- " << s_balance << endl;
        system("pause");
    }

    void s_Withdraw()
    {
        Display();

        float amount;
        cout << "Enter the amount you want to withdraw : ";
        cin >> amount;
        if (s_balance < 500)
        {
            cout << "Insufficient Balance ! ";
        }
        else
        {
            s_balance = s_balance - amount;
            cout << "Withdraw Successfull ! " << endl;
            cout << "Total Amount left:- " << s_balance << endl;

            system("pause");
        }
    }
};

int main()
{
    cout << "#### Banking System ####\n";
    currentAct obj2;
    savingAct obj1;
    cout << "Enter user 1 details:- " << endl;
    obj1.getDetails();
    system("cls");
    cout << "Enter user 2 details:- " << endl;
    obj2.getDetails();

Menu:
    system("cls");

    char choice;
    cout << "\tSelect your account type.\n\tC- Current Account\n\tS-Saving Account\n";
    cin >> choice;
    if (choice == 'c' || choice == 'C')
    {
        system("cls");
        obj2.c_menu();
        goto Menu;
    }
    else if (choice == 's' || choice == 'S')
    {
        system("cls");
        obj1.s_menu();
        goto Menu;
    }

    else
    {
        cout << "Invalid Input !" << endl;
        system("pause");
    }
    goto Menu;
}
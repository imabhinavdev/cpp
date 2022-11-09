// imagine a toll booth , car passing by the toll booth are accepted to pay rupee 50.
/*Mostly they do but sometimes a car goes by without paying. the toll booth keeps track of thr
number of cars that have gine by and of the total amount of money collected.
Model this toll booth with a class called toll-booth. the two data items are total number of
cars of type int and a type double to hold total amount of money collected.Design a constructor
  to initiliaze both these values to 0. design a member function called Paying car which
  increment the car total and adds 50 rupees to the total cash. Another function callled non
  paying car which increments the car total but adds nothing to the cash total.Finall A member
  function called display which will diplay the two values : total cars, total cash.This
  program should allow the user push one key to count the paying cars and another key to count
  the non paying car. Third key to display both the values and finally to exit.*/
#include <iostream>
using namespace std;

class tollBooth
{
private:
    int totalCars;
    double Amount;

public:
    tollBooth()
    {
        totalCars = 0;
        Amount = 0;
    }
    void Paying()
    {
        totalCars++;
        Amount = Amount + 50;
        cout << "Car and amount added succesfully.\n";
        system("pause");
    }
    void NonPaying()
    {
        totalCars++;
        cout << "Car and amount added succesfully.\n";
        system("pause");
    }
    void display()
    {
        cout << "the total number of cars is : " << totalCars << endl;
        cout << "the total amount is :- " << Amount << endl;
        system("pause");
    }
};
int main()
{
    int option;
    tollBooth Car;
Menu:
    system("CLS");
    cout << "\n###### NHAI Toll Booth ######" << endl;
    cout << "\t1.Paying Cars \n\t2.Non Paying Cars\n\t3.Display\n\t4.Exit\n";
    cin >> option;
    switch (option)
    {
    case 1:
        Car.Paying();
        goto Menu;
        // break;
    case 2:
        Car.NonPaying();
        goto Menu;
        // break;
    case 3:
        Car.display();
        goto Menu;
        // break;

    default:
        exit;
        break;
    }
}

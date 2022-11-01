#include <iostream>
#include <stdlib.h>
using namespace std;
class Time
{
    int hour, minute, second;

public:
    void Input()
    {
        cout << "Enter hour:- ";
        cin >> hour;
        cout << "Enter minute :- ";
        cin >> minute;
        cout << "Enter second:- ";
        cin >> second;
    }

    void add(Time t1, Time t2, Time t3)
    {

        second = t1.second + t2.second + t3.second;
        minute = t1.minute + t2.minute + t3.minute;
        hour = t1.hour + t2.hour + t3.hour;
        while (second >= 60)
        {
            second = second - 60;
            minute++;
        }
        while (minute >= 60)
        {
            minute = minute - 60;
            hour++;
        }

        system("CLS");
        cout << "Hour :- " << hour;
        cout << "\nMinute :- " << minute;
        cout << "\nSecond:- " << second;
    }
};

int main()
{
    Time t1, t2, t3, t4;
    t1.Input();
    t2.Input();
    t3.Input();
    t4.add(t1, t2, t3);
}
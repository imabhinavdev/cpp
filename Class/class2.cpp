// WAP to create a class for time. Take hour,minute,second.
// Create an object, take time and display it.
#include <iostream>

using namespace std;

class time
{
private:
    int hour, minute, sec;

public:
    void getdata()
    {
        cout << "Enter hour:- ";
        cin >> hour;
        cout << "Enter minute:- ";
        cin >> minute;
        cout << "Enter second:- ";
        cin >> sec;

        while (sec >= 60)
        {
            minute++;
            sec = sec - 60;
        }
        while (minute >= 60)
        {
            hour++;
            minute = minute - 60;
        }
    }

    void putdata()
    {
        cout << hour << " : " << minute << " : " << sec;
    }
} s1;

int main()

{
    s1.getdata();
    s1.putdata();
}
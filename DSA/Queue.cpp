// Made by:- Abhinav Singh
// Date:- 19 November,2022
#include <iostream>
#include <stdlib.h>

using namespace std;

class queue
{
    int *ary;
    int front, back;

public:
    queue()
    {
        ary = new int[5];
        front = -1;
        back = -1;
    }
    int push(int data)
    {
        if (back >= 4)
        {
            cout << "Data insertion fail ! Queue is full." << endl;
            return 0;
        }
        if (front == -1)
        {
            front++;
        }
        back++;

        ary[back] = data;
        cout << "The data inserted successfully." << endl;
    }

    int pop()
    {
        if (front > back)
        {
            cout << "No elements to pop." << endl;

            return 0;
        }
        int temp = front;
        front++;
        temp = NULL;
        cout << "The data deleted successfully." << endl;
    }

    int peek()
    {
        if (front == -1)
        {
            cout << "The queue is empty." << endl;
            return 0;
        }
        cout << "Peek element is :- " << ary[front] << endl;
    }
    void newQueue()
    {
        cout << "New Queue generated successfully." << endl;
    }

    int print()
    {

        if (front == -1)
        {
            cout << "The queue is empty." << endl;
            return 0;
        }
        int temp = front;
        while (temp <= back && back < 5)
        {
            cout << ary[temp] << " ";
            temp++;
        }

        cout << endl;
        if (front > back)
        {
            cout << "Queue is completed. You should a create new queue." << endl;
        }
    }
};

int main()
{
newQueue:
    int menu_choice, data;
    queue obj;
Menu:
    system("cls");
    cout << "#### Queue Menu  ####\n";
    cout << "\t1.Push\n\t2.Pop\n\t3.Print\n\t4.Peek\n\t5.Exit\n\t6.New Queue\n\tChoice:- ";
    cin >> menu_choice;
    switch (menu_choice)
    {
    case 1:
        system("cls");
        cout << "Enter the number you want to insert:- ";
        cin >> data;
        obj.push(data);
        system("pause");
        goto Menu;

    case 2:
        system("cls");
        obj.pop();
        system("pause");
        goto Menu;

    case 3:
        system("cls");
        obj.print();
        system("pause");
        goto Menu;

    case 4:
        system("cls");
        obj.peek();
        system("pause");
        goto Menu;

    case 5:
        abort();
    case 6:
        obj.newQueue();
        system("pause");
        goto newQueue;
    default:
        cout << "Invalid Input\n";
        system("pause");
        goto Menu;
    }
}

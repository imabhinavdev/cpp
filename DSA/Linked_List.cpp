#include <iostream>
#include <stdlib.h>
using namespace std;

// Creating Node
class node
{
public:
    int data;
    node *next;
    node()
    {
        data = 0;
        next = NULL;
    }
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LL
{
public:
    node *head = NULL, *tail = NULL;

    // INSERTION
    int insertion(int data)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            cout << "The data inserted successfully." << endl;
            return 0;
        }
        tail->next = newnode;
        tail = newnode;
        cout << "The data inserted successfully." << endl;
    }

    int insertion_at_pos(int pos, int number)
    {
        node *temp = new node(number);
        node *curr = head;
        node *prev = NULL;
        int check = 1;
        if (pos == check)
        {
            temp->next = head;
            head = temp;
            cout << "The data inserted successfully." << endl;
            return 0;
        }
        while (check < pos)
        {
            prev = curr;
            curr = curr->next;
            check++;
        }
        prev->next = temp;
        temp->next = curr;
        cout << "The data inserted successfully." << endl;
    }

    // DELETION

    int deletion(int pos)
    {
        node *curr = head;
        node *prev = NULL;
        int check = 1;
        if (pos == check)
        {
            head = head->next;
            delete curr;
            cout << "The data deleted successfully." << endl;

            return 0;
        }
        while (check < pos)
        {
            prev = curr;
            curr = curr->next;
            check++;
        }
        prev->next = curr->next;
        curr = NULL;
        delete curr;
        cout << "The data deleted successfully." << endl;
    }

    // PRINTING

    int print()
    {

        node *temp = head;
        if (temp == NULL)
        {
            cout << "The Linked list is empty !" << endl;
            return 0;
        }
        cout << "The Linked List is :- " << endl;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    LL obj;
    int menu_choice, number, pos;
Menu:
    system("cls");

    cout << "#### Linked List Menu #####" << endl;
    cout << "\t1.Insertion at tail\n\t2.Deletion at postition\n\t3.Print\n\t4.Insertion at position\n\t5.Exit\n\tChoice :- ";
    cin >> menu_choice;
    fflush(stdin);
    switch (menu_choice)
    {
    case 1:
        system("cls");

        cout << "\tEnter the number you want to insert:- ";
        cin >> number;
        obj.insertion(number);
        system("pause");

        goto Menu;
        break;
    case 2:
        system("cls");

        cout << "Enter the postition you want to delete:- ";
        cin >> number;
        obj.deletion(number);
        system("pause");
        goto Menu;

    case 3:
        system("cls");

        obj.print();
        system("pause");

        goto Menu;

    case 4:
        system("cls");

        cout << "Enter the postition you want to insert:- ";
        cin >> pos;
        cout << "Enter the number you want to insert:- ";
        cin >> number;
        obj.insertion_at_pos(pos, number);
        system("pause");
        goto Menu;

    case 5:
        break;

    default:
        goto Menu;
    }
}

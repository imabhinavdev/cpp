#include <iostream>
#include <stdlib.h>
using namespace std;
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
    int insertion(int data)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            cout << "The data inserted successfully." << endl;
            cout << tail->data << endl;

            return 0;
        }
        tail->next = newnode;
        tail = newnode;
        cout << "The data inserted successfully.";
        cout << tail->data << endl;
    }
    int deletion(int pos)
    {
        node *curr = head;
        node *prev = NULL;
        int check = 1;
        while (check < pos)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        curr = NULL;
        delete curr;
        cout << "The data deleted successfully." << endl;
    }

    int print()
    {
        node *temp = head;
        if (temp == NULL)
        {
            cout << "The Linked list is empty !" << endl;
            return 0;
        }

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    int menu_choice, number;
Menu:

    cout << "#### Linked List Menu #####" << endl;
    cout << "\t1.Insertion at tail\n\t2.Deletion at postition\n\t3.Print\n\t4.Exit\n\t";
    cin >> menu_choice;
    LL obj;
    switch (menu_choice)
    {
    case 1:

        cout << "\tEnter the number you want to insert:- ";
        cin >> number;
        obj.insertion(number);
        system("pause");

        goto Menu;
        break;
    case 2:

        cout << "Enter the postition you want to delete:- ";
        cin >> number;
        obj.deletion(number);
        system("pause");

        goto Menu;
    case 3:

        obj.print();
        system("pause");

        goto Menu;

    default:
        break;
    }
    obj.print();
}

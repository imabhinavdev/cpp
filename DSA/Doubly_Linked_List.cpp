#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;

    node()
    {
        data = 0;
        next = NULL;
        prev = NULL;
    }
    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Action
{
public:
    node *head = NULL, *tail = NULL;
    int insertion_at_tail(int data)
    {
        node *newNode = new node(data);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            cout << "Data inserted !" << endl;

            return 0;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        cout << "Data inserted at tail!" << endl;
    }

    int insertion_at_head(int data)
    {
        node *newNode = new node(data);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            cout << "Data inserted !" << endl;

            return 0;
        }
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
        cout << "Data inserted at head !" << endl;
    }

    int deletion(int position)
    {
        node *current = head, *prev = head, *last = head;

        if (current == NULL)
        {
            cout << "the linked list is empty." << endl;
            return 0;
        }
        for (int i = 1; i < position; i++)
        {
            prev = current;
            current = current->next;
            last = current->next;
        }
        prev->next = current->next;
        last->prev = prev;

        delete current;
        cout << "Data deleted !" << endl;
    }

    int print()
    {
        node *temp = head;
        if (temp == NULL)
        {
            cout << "the linked list is empty." << endl;
            return 0;
        }
        cout << "Linked list is:- \n";
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
    Action obj;
Menu:
    system("cls");
    int choice, data, position;
    cout << "#### Linked List ####" << endl;
    cout << "\t1.Insertion at head\n\t2.Insertion at tail\n\t3.Deletion\n\t4.Print\n\t5.Exit\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Enter the data you want to insert !" << endl;
        cin >> data;
        obj.insertion_at_head(data);
        system("pause");
        goto Menu;
    case 2:
        cout << "Enter the data you want to insert !" << endl;
        cin >> data;
        obj.insertion_at_tail(data);
        system("pause");
        goto Menu;

    case 3:
        cout << "Enter the position you want to delete:- ";
        cin >> position;
        obj.deletion(position);
        system("pause");
        goto Menu;
    case 4:
        obj.print();
        system("pause");
        goto Menu;

    default:
        break;
    }
}

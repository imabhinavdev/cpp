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
            return 0;
        }
        tail->next = newnode;
        tail = newnode;
        // cout << tail->data << endl;
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
    int number;
    LL obj;
    // obj.print();
    cin >> number;
    obj.insertion(number);
    cin >> number;
    obj.insertion(number);
    // obj.print();
    obj.insertion(9);
    obj.insertion(10);
    obj.print();
    obj.deletion(2);
    obj.print();
}

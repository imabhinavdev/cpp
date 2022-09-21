// WAP to create a class book with private data members as title,bookid ,price.Accept input from the user and dsiplay book details through arrays of objects.
#include <iostream>
#include <string.h>
using namespace std;
class Book
{
private:
    int book_id, book_price;
    string book_name;

public:
    void newBook()
    {
        system("cls");
        cout << "Enter book title:- ";
        cin >> book_name;
        cout << "Enter book id:- ";
        cin >> book_id;
        cout << "Enter book price:- ";
        cin >> book_price;
    }
    void showDetails()
    {
        cout << "\nbook name - " << book_name;
        cout << "\nbook id - " << book_id;
        cout << "\nbook price - " << book_price;
    }
};

int main()
{
    cout << "Enter the number of books entry. ";
    int number;
    cin >> number;
    Book b[number];
    for (int i = 0; i < number; i++)
    {
        b[i].newBook();
    }
    for (int j = 0; j < number; j++)
    {
        b[j].showDetails();
    }
}

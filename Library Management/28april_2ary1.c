//
#include <stdio.h>

void menu();
void addbook();

void main()
{
    // int num1[5], num2;
    // char check[50];
    // FILE *myfile;
    // myfile = fopen("Mymainfile", "a+");
    // fscanf(myfile, " %d", num1);
    // printf("%d\n", num1[0]);
    // if (num1[0] == 8416948)
    // {
    //     printf("File is scanned\n");
    //     num2 = num1[0];
    //     printf("%d", num2);
    // }
    menu();
}

void menu()
{
    int menu_choice;
    printf("\t\t\t\t\t\t\t\t\t\t\t\tLIBRARY MANAGEMENT\n");
    printf("\t\t\t\t\t\t\t\t\t\t***********************************************\n");
    printf("\t\t\t\t\t\t\t\t\t\tPress\n\t\t\t\t\t\t\t\t\t\t1.Issue Book to a student\n\t\t\t\t\t\t\t\t\t\t2.Add New Book\n\t\t\t\t\t\t\t\t\t\t3.Add Student\n\n\t\t\t\t\t\t\t\t\t\tEnter your choice:- ");
    scanf("%d", &menu_choice);
    switch (menu_choice)
    {
    case 1:
        addbook();
        break;

    default:
        break;
    }
}

void addbook()
{
    system("cls");
    int book_id;
    char book_name[50];
    printf("\t\t\t\t\t\t\t\t\t\t\t\tLIBRARY MANAGEMENT\n");
    printf("\t\t\t\t\t\t\t\t\t\t***********************************************\n");
    FILE *bookid;
    bookid = fopen("Book_id", "w+");
    fscanf(bookid, "%d", &book_id);
    // int booknum = book_id + 1;

    // fprintf(bookid, "%d", booknum);
    fclose(bookid);
    // --booknum;

    // printf("\t\t\t\t\t\t\t\t\t\tEnter book id:- ");
    // scanf("%d", &book_id);
    fflush(stdin);
    printf("\n\t\t\t\t\t\t\t\t\t\tEnter book name:- ");
    scanf("%[^\n]%*c", &book_name);
    printf("\t\t\t\t\t\t\t\t\t\tBook Unique Number:- %d\n", book_id);
    printf("\t\t\t\t\t\t\t\t\t\tBook Name:- %s", book_name);

    FILE *bookname;
    bookname = fopen("BookName", "w");
    fprintf(bookname)
}
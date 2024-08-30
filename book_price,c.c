/*Write a C program to create a structure named book (book_name,
author_name and price) and display all book details having price > ____
in a proper format by passing the structure array as function argument.*/

#include<stdio.h>
#include<string.h>

#define MAX_BOOK 10

struct book
{
    char book_name[20];
    char author_name[20];
    float price;
};
void displayBook(struct book books[], int numbooks, float minPrice)
{
    printf("Book with price greater than %.2f:\n",minPrice);
    printf("_______________________________\n");
    for (int i=0; i<numBooks; i++)
    {
        if(books[i].price >minPrice)
        {
            printf("Book name:%s\n",book[i].book_name);
            printf("Author name:%s\n",Books[i].author_name);
            printf("Price:%.2f\n",book[i].price);
            printf("---------------\n");
        }
    }
}

int main()
{
    struct book books[MAX_BOOK];
    int numBooks;

    printf("Enter the numbers of books:");
    scanf("%d",&numBook);
    getchar();

    printf("\n");

    //read book detaile from the user//
    for(int i=0;i<numBook;i++)
    {
        printf("Enter details for  books %d:\n",i+1);

        printf("Book name :");
        fgets(books[i].book_name, sizeof (books[i].book_name),stdin);
        books[i].book_name[strcspn(books[i].book_name,"\n")]='\0';

        printf("Author name:");
        fgets(books[i].author_name, sizeof(books[i].author_name),stdin);
        books[i].author[i].author_name[strcspn(books[i].author_name,"\n")]='\0';

        printf("Price:");
        scanf("%f",&books[i].price);
        getchar();

        printf("\n");


    }

    float minPrice;
    printf("Enter the minimum price filter books:");
    scanf("%f",&minPrice);

    displayBook(books, numBook,minPrice);

    return 0;


}

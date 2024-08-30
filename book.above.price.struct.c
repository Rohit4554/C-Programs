#include <stdio.h>

struct Book {
    int bno;
    char bname[50];
    float price;
};

void displayAllBooks(struct Book books[], int n) {
    printf("Book Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Book Number: %d\n", books[i].bno);
        printf("Book Name: %s\n", books[i].bname);
        printf("Price: $%.2f\n", books[i].price);
        printf("--------------------------\n");
    }
}

void displayBooksAbovePrice(struct Book books[], int n, float p) {
    printf("Books with price > %.2f:\n", p);
    for (int i = 0; i < n; i++) {
        if (books[i].price > p) {
            printf("Book Number: %d\n", books[i].bno);
            printf("Book Name: %s\n", books[i].bname);
            printf("Price: $%.2f\n", books[i].price);
            printf("--------------------------\n");
        }
    }
}

int main() {
    int n;
    printf("Enter the number of books: ");
    scanf("%d", &n);

    struct Book books[n];

    for (int i = 0; i < n; i++) {
        printf("Enter details for Book %d:\n", i + 1);
        printf("Book Number: ");
        scanf("%d", &books[i].bno);
        printf("Book Name: ");
        scanf(" %[^\n]s", books[i].bname);
        printf("Price: $");
        scanf("%f", &books[i].price);
        printf("--------------------------\n");
    }

    displayAllBooks(books, n);

    float p;
    printf("Enter the price to filter books: $");
    scanf("%f", &p);

    displayBooksAbovePrice(books, n, p);

    return 0;
}

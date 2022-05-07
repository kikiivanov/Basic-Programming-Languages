/*Write a 'C' program to accept book details for 'n' books as book_title, author, publisher and cost.
Assign the accession number to each book in increasing order. Display these details as,

1. Books of a specific author
2. Books by a specific Publisher
3. All Books costing Rs. 500 and above.
4. All Books.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void books_by_author(char author[30], int n);
void books_by_publisher(char publisher[30], int n);
void books_by_cost(int n);
void all_books(int n);

struct book
{
    int book_no;
    char book_title[50];
    char author[30];
    char publisher[30];
    double cost;
    int acno;

} books[10];

int main() {
    int n, i, ch;
    char author[30], publisher[30];
    printf("How Many Books Do You Want? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        books[i].book_no = i + 1;
        printf("\nDetails for Book No.%d:\n", books[i].book_no);
        printf("Enter Book Title: ");
        scanf("%s", books[i].book_title);
        printf("Enter Author: ");
        scanf("%s", books[i].author);
        printf("Enter Publisher: ");
        scanf("%s", books[i].publisher);
        printf("Enter Cost: ");
        scanf("%lf", &books[i].cost);
        printf("Enter Accession Number: ");
        scanf("%d", &books[i].acno);
    }

    printf("\n\t\tMENU\n");
    printf("------------------------------------------\n");
    printf("\n1. Books of Specific Author");
    printf("\n2. Books of Specific Publisher");
    printf("\n3. All Books Costing Rs. 500 & Above");
    printf("\n4. All Books");
    printf("\n5. Exit");
    printf("\n------------------------------------------\n");

    while(1)
    {
        printf("\nEnter Your Choice: ");
        scanf("%d", &ch);
        printf("\n");

        switch(ch)
        {
            case 1:
                books_by_author(author, n);
                break;

            case 2:
                books_by_publisher(publisher, n);
                break;

            case 3:
                books_by_cost(n);
                break;

            case 4:
                all_books(n);
                break;

            case 5:
                exit(0);

            default:
                printf("Operator Is Not Correct");
        }
    }

    return 0;
}

void books_by_author(char author[30], int n)
{
    printf("Enter the Author You Are Searching: ");
    scanf("%s", author);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(author, books[i].author) == 0)
        {
            printf("Book Title: %s", books[i].book_title);
            printf("\nAuthor: %s", books[i].author);
            printf("\nPublisher: %s", books[i].publisher);
            printf("\nCost: %g", books[i].cost);
            printf("\nAccession Number: %d", books[i].acno);
            printf("\n");
        }
    }
}

void books_by_publisher(char publisher[30], int n)
{
    printf("Enter the Publisher You Are Searching: ");
    scanf("%s", publisher);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(publisher, books[i].publisher) == 0)
        {
            printf("Book Title: %s", books[i].book_title);
            printf("\nAuthor: %s", books[i].author);
            printf("\nPublisher: %s", books[i].publisher);
            printf("\nCost: %g", books[i].cost);
            printf("\nAccession Number: %d", books[i].acno);
            printf("\n");
        }
    }
}

void books_by_cost(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (books[i].cost >= 500)
        {
            printf("Book Title: %s", books[i].book_title);
            printf("\nAuthor: %s", books[i].author);
            printf("\nPublisher: %s", books[i].publisher);
            printf("\nCost: %g", books[i].cost);
            printf("\nAccession Number: %d", books[i].acno);
            printf("\n");
        }
    }
}

void all_books(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Details for Book No.%d:", i+1);
        printf("\nBook Title: %s", books[i].book_title);
        printf("\nAuthor: %s", books[i].author);
        printf("\nPublisher: %s", books[i].publisher);
        printf("\nCost: %g", books[i].cost);
        printf("\nAccession Number: %d", books[i].acno);
        printf("\n\n");
    }
}


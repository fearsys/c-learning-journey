#include <stdio.h>
#include <stdbool.h>
#include <float.h>

typedef struct {
    char title[30];
    char author[20];
    int year;
    float rating;
    bool isAvailable;
} Book;

void margin();
void detailPrinter(Book book);
void title();

int main () {

    Book books[] = {
    {"The Hobbit", "J.R.R. Tolkien", 1937, 4.8, true},
    {"1984", "George Orwell", 1949, 4.7, false},
    {"Clean Code", "Robert Martin", 2008, 4.6, true},
    {"The Alchemist", "Paulo Coelho", 1988, 4.5, true}
    };

    margin();
    title();
    margin();
    
    int size = sizeof(books) / sizeof(books[0]);

    for (int i = 0; i < size; i++) {
        printf("%d. ", i + 1);
        detailPrinter(books[i]);
        printf("\n");
    }

    margin();

    return 0;    
}

void margin() {
    printf("==============================\n");
}

void title() {
    printf("       LIBRARY CATALOG\n");
}

void detailPrinter(Book book) {
    printf("%s\nAuthor: %s\nYear:   %d\nRating: %.2f\nStatus: %s\n", book.title, book.author, book.year, book.rating, (book.isAvailable) ? "Available" : "Checked Out");
} 


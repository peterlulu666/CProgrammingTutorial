#include <stdio.h>
#include <string.h>

// define struct
struct Books {
    char title[100];
    char author[100];
    char subject[100];
    int book_id;

};

// struct as function parameter
void printBook(struct Books books) {
    printf("%s\n", books.title);
    printf("%d\n", books.book_id);

}

int main(){
    // declare struct
    struct Books book_one;
    struct Books book_two;
    // assign struct
    strcpy(book_one.title, "Programming");
    book_one.book_id = 123456;
    strcpy(book_one.subject, "Computer");
    // call the printBook function
    printBook(book_one);
    return 0;

}

#include <stdio.h>
#include <string.h>

#define CONTACT_SIZE 5

typedef struct {
    char name[30];
    char phone[15];
    char email[30];
} Contact;

void removeNewline(char str[]);
void userInput(Contact contacts[], int size);
void headerPrinter();
void contactPrinter(Contact contacts[], int size);
void columnPrinter();
void margin();
void searchContact(Contact contacts[], int size);

int main () {

    Contact contacts[CONTACT_SIZE] = {0};
    userInput(contacts, CONTACT_SIZE);
    headerPrinter();
    columnPrinter();
    contactPrinter(contacts, CONTACT_SIZE);
    margin();
    searchContact(contacts,CONTACT_SIZE);

    return 0;
}

void removeNewline(char str[]) {
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

void userInput(Contact contacts[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Name: ");
        fgets(contacts[i].name, sizeof(contacts[i].name), stdin);
        removeNewline(contacts[i].name);
        printf("Phone: ");
        fgets(contacts[i].phone, sizeof(contacts[i].phone), stdin);
        removeNewline(contacts[i].phone);
        printf("Email: ");
        fgets(contacts[i].email, sizeof(contacts[i].email), stdin);
        removeNewline(contacts[i].email);
    }
}

void headerPrinter() {
    printf("====================================================\n");
    printf("                   CONTACT LIST\n");
    printf("====================================================\n");
}

void contactPrinter(Contact contacts[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d. %-30s %-15s %-30s\n", i+1, contacts[i].name, contacts[i].phone, contacts[i].email);
    }
}

void columnPrinter() {
    printf("SL.            NAME                   PHONE                EMAIL\n");
}

void margin() {
    printf("====================================================\n"); 
}

void searchContact(Contact contacts[], int size) {
    char query[30];
    printf("Enter name to search: ");
    fgets(query, sizeof(query), stdin);
    removeNewline(query);

    for (int i = 0; i < size; i++) {
        if (strcmp(contacts[i].name, query) == 0) {
            printf("Found!\n");
            printf("%-30s %-15s %-30s\n",contacts[i].name, contacts[i].phone,contacts[i].email);
            return;
        }
    }
    printf("Contact not found.\n");
}
#include <stdio.h>
#include <string.h>

void removeNewline(char str[]) { // removes new line from the given string of characters
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') { // In the place of new line character we adjust the null terminator
        str[len - 1] = '\0';
    }
}

int main () {

    char name[3][10] = {0}; // 3 rows 10 columns 
    int rows = sizeof(name) / sizeof(name[0]); 
    printf("%d\n", sizeof(name)); // total elements = 3 × 10 = 30 chars each char = 1 byte ,sizeof(name) = 30 bytes
    printf("%d\n", sizeof(name[0])); // 10 chars × 1 byte = 10 bytes, size of first row
    
    for (int i = 0; i < rows; i++) {
        printf("Enter Name: ");
        fgets(name[i], sizeof(name[i]), stdin);
        removeNewline(name[i]); 
    }
    
    for (int i = 0; i < rows; i++) {
        printf("%s\n", name[i]);
    }

    return 0;
}
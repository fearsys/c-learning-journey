#include <stdio.h>
#include <string.h>

void removeNewline(char str[]) {
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

int main () {

    char name[3][10] = {0};
    int rows = sizeof(name) / sizeof(name[0]);
    
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
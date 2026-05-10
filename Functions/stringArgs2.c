#include <stdio.h>

void toggleCase(char str[]);
int replaceChar(char str[], char old, char new);

int main () { 

    char str1[] = "Hello World";
    char str2[] = "programming in c";
    printf("Toggle %s: ", str1);
    toggleCase(str1);
    printf("%s\n",str1);
    char old = 'g';
    char new = '+';
    printf("Replace '%c' with '%c' in %s: ",old, new, str2 );
    int count = replaceChar(str2, old, new);
    printf("%s  (%d replacements)\n", str2, count);

    return 0;
}
void toggleCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i]+= 32;
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i]-= 32;
        }
    }
}

int replaceChar(char str[], char old, char new) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == old) {
            str[i] = new;
            count ++;
        }
    }
    return count;
}
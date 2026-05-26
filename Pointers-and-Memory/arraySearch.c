#include <stdio.h>

int nameExists(char names[][20], int count, char target[]);

int main() {
    char names[][20] = {
        "Amit",
        "Ravi",
        "Sita",
        "Neha"
    };

    printf("%d\n", nameExists(names, 4, "Sita"));
    printf("%d\n", nameExists(names, 4, "Karan"));

    return 0;
}

int nameExists(char names[][20], int count, char target[]) {

    for (int i = 0; i < count; i++) {

        char *pname = names[i];
        char *ptarget = target;

        while (*pname != '\0' &&
               *ptarget != '\0' &&
               *pname == *ptarget) {

            pname++;
            ptarget++;
        }

        if (*pname == '\0' && *ptarget == '\0') {
            return 1;
        }
    }

    return 0;
}
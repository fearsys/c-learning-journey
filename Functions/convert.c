#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: ./convert <temp> <C or F>\n");
        return 1;
    }
    if (strcmp(argv[2], "C") != 0 && strcmp(argv[2], "F") != 0) {
        printf("Usage: ./convert <temp> <C or F>\n");
        return 1;
    }
    if (strcmp(argv[2], "C") == 0) {
        float result = atof(argv[1]) * 1.8 + 32;
        printf("%s°C = %.2f°F\n", argv[1], result);
    } else if (strcmp(argv[2], "F") == 0) {
        float result = (atof(argv[1]) - 32) * 5.0 / 9.0;
        printf("%s°F = %.2f°C\n", argv[1], result);
    }
    return 0;
}
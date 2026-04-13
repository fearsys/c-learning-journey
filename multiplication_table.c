#include <stdio.h>

void tableprinter(int n) {
    for (int i = 1; i <= n; i++) {
        printf(" %d |", i);
        for (int j = 1; j <= n; j++) {
            printf("%3d", i * j);
        }
        printf("\n");
    }
}

void rowheader (int n) {
    printf("   |");
    for (int i = 1; i <= n ; i++) {
        printf("%3d",i);
    }
    printf("\n");
}

void seperatorLine(int n) {
    printf("---+");
    for (int i = 0; i < n * 3; i++) {
        printf("-");
    }
    printf("\n");
}
int main () {

    int tablesize = 0;
    printf("Table size: ");
    scanf("%d", &tablesize);
    rowheader(tablesize);
    seperatorLine(tablesize);
    tableprinter(tablesize);

    return 0;

}


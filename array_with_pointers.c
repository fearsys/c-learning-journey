#include <stdio.h>
#include <limits.h>

void title();
void elements(int* p, int size);
void sum(int* p, int size);
float average(int *p , int size);
int highest(int *p, int size);
int lowest(int *p, int size);
int aboveavg (int *p , int size, float average);


int main () {

    int numbers[] = {45, 12, 78, 34, 90, 23, 56, 89, 11, 67};
    int *p = numbers;
    title();
    int size = sizeof(numbers)/ sizeof(numbers[0]);
    elements(p, size);
    sum(p, size);
    float avg = average(p, size);
    printf("Average: %.2f\n",avg);
    printf("Highest : %d\n", highest(p, size));
    printf("Lowest: %d\n", lowest(p, size));
    
    printf("Above average: %d\n", aboveavg(p, size, avg));

    return 0;
}

void title() {
    printf("==============================\n");
    printf("     ARRAY STATISTICS\n");
    printf("==============================\n");
}

void elements(int* p, int size) {
    printf("Elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *p++);
    }
    printf("\n");
}

void sum(int* p, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + *p;
        p++;
    }
    printf("Sum: %d\n",sum);
}

float average(int *p , int size) {
    float sum = 0.0f;
    for (int i = 0; i < size; i++) {
        sum = sum + *p;
        p++;
    }
    float average = sum / size;
    return average;
}

int highest(int *p, int size) {
    int highest = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (*p > highest) {
            highest = *p;
        }
        p++;
    }
    return highest;
}

int lowest(int *p, int size) {
    int lowest = INT_MAX;
    for (int i = 0; i < size; i++) {
        if (*p < lowest) {
            lowest = *p;
        }
        p++;
    }
    return lowest;
}

int aboveavg (int *p , int size, float average) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (*p > average) {
            count++;
        }
        p++;
    }
    return count;
}
#include <stdio.h>
#include <float.h>

void marginer();
void headerPrinter();
float average(float grade[], int size);
int highestGradeIndex (float grade[], int size);
int lowestGradeIndex (float grade[], int size);

int main () {

    char names[][20] = {"Alice", "Bob", "Charlie", "Diana", "Eve"};
    float grades[] = {85.5, 92.0, 78.3, 95.1, 88.7};
    int size = sizeof(grades) / sizeof(grades[0]);

    headerPrinter();
    for (int i = 0; i < size; i++) {
        printf("%d. %-13s%.2f ", i+1, names[i], grades[i]);
        if (grades[i] >= 60) {
            printf("PASS\n");
        }
        else {
            printf("FAIL\n");
        }
    }
    marginer();
    printf("Class Average:  %.2f\n",average(grades, size));

    int hi = highestGradeIndex(grades, size);
    int lo = lowestGradeIndex(grades, size);

    printf("Highest Grade:  %.2f (%s)\n", grades[hi], names[hi]);
    printf("Lowest Grade:   %.2f (%s)\n", grades[lo], names[lo]);
    marginer();
    return 0;   
}

void headerPrinter() {
    marginer();
    printf("      STUDENT GRADE TRACKER\n");
    marginer();
}

void marginer() {
    printf("==============================\n");
}

float average(float grade[], int size) {
    float sum = 0.0f;
    for (int i = 0; i < size; i++) {
        sum += grade[i];
    }
    float avg = sum / size;
    return avg;
}

int highestGradeIndex(float grade[], int size) {
    int highestIndex = 0;  // start assuming index 0 is highest
    for (int i = 1; i < size; i++) {  // start from 1, compare against 0
        if (grade[i] > grade[highestIndex]) {  // compare grades using index
            highestIndex = i;  // store the INDEX not the grade
        }
    }
    return highestIndex;
}

int lowestGradeIndex(float grade[], int size) {
    int lowestIndex = 0;
    for (int i = 1; i < size; i++) {
        if (grade[i] < grade[lowestIndex]) {
            lowestIndex = i;
        }
    }
    return lowestIndex;
}

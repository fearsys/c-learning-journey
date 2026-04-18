#include <stdio.h>
#include <string.h>

#define SIZE 4

typedef struct {
    char name[30];
    int age;
    float grades[3]; // Math, Science, English
    float average;
} Student;

void input(Student student[], int size);
void removeNewline(char str[]);
float average(Student student);
void table (Student student[], int size);
int lowestIndex (Student student[], int size);
int highestIndex (Student student[], int size);

int main () {

    Student student[SIZE] = {0};
    
    input(student, SIZE);
    table (student,SIZE);
    int Hi = highestIndex(student, SIZE);
    int Lo = lowestIndex(student, SIZE);
    printf("Topper : %s Average: %.2f\n", student[Hi].name, student[Hi].average);
    printf("Weakest : %s Average: %.2f\n", student[Lo].name, student[Lo].average);

    return 0;
}

void input(Student student[], int size) {
    
    for (int i = 0; i < size; i++) {
        printf("Name: ");
        fgets(student[i].name, sizeof(student[i].name), stdin);
        removeNewline(student[i].name);

        printf("Age: ");
        scanf("%d", &student[i].age);

        for (int j = 0; j < 3; j ++) {
            printf("Grade (%s): ",(j == 0) ? "MATH" : (j == 1) ? "SCIENCE" : "ENGLISH");
            scanf("%f", &student[i].grades[j]);
        }
        student[i].average = average(student[i]);
        getchar();
    }
}

void removeNewline(char str[]) {
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

float average(Student student) {
    float sum = 0.0f;
    for (int i = 0; i < 3 ; i++) {
        sum += student.grades[i];
    }
    float avg = sum / 3.0f;
    return avg;
}

void table (Student student[], int size) {
    printf("--------------------------------------------------\n");
    printf("                STUDENT REPORT\n");
    printf("--------------------------------------------------\n");
    printf("%-3s %-30s %-5s %-5s %-5s %-5s %-5s %-8s\n", "NO.", "NAME", "AGE", "MATH", "SCI", "ENG", "AVG", "REMARKS");
    for (int i = 0; i < size; i++ ) {
        printf("%-3d %-30s %-5d %-5.2f %-5.2f %-5.2f %-5.2f %-8s\n", i+1, student[i].name, student[i].age, student[i].grades[0], student[i].grades[1], student[i].grades[2], student[i].average, (student[i].average >= 60)? "PASS" : "FAIL");
        
    }
    printf("--------------------------------------------------\n");
    
}

int highestIndex (Student student[], int size) {
    int max = 0;
    for(int i = 1; i < size; i++) {
        if (student[i].average > student[max].average) {
            max = i;
        }
    }
    return max;
}

int lowestIndex (Student student[], int size) {
    int min = 0;
    for(int i = 1; i < size; i++) {
        if (student[i].average < student[min].average) {
            min = i;
        }
    }
    return min;
}


#include <stdio.h>

struct Student {
    char name[30];
    int age;
    int marks;
};

struct School {
    char name[30];
    int schoolId;
    struct Student st;
};

int main () {

    struct School dav = {"DAV", 101, "Jai", 21, 93};

    printf("%s %d %s %d %d\n", dav.name, dav.schoolId, dav.st.name, dav.st.age, dav.st.marks);

    struct Student pk = {"Praveen", 22, 78};

    printf("%s %d %d\n", pk.name, pk.age, pk.marks);

    return 0;

}
#include <stdio.h>

void line();

int main () {

    int x = 10;
    int *px = &x;
    printf("%p\n", px);
    line();
    int y = 200, *py = &y; // single line declaration
    printf("%p\n", py);
    char c = 'y';
    char *pc = &c;
    printf("%p\n", &c);
    printf("%p\n", pc);
    line();
    float f = 87.33f;
    float *pf = &f;
    float **ppf = &pf; // double pointer
    printf("%f\n", f);
    printf("%p\n", pf);
    printf("%p\n", ppf);
    line();
    char name[] = "Praveen";
    printf("%p\n", name); 
    printf("%p\n", &name);
    printf("%p\n", &name[0]);  
    line();
    for (int i = 0; i < sizeof(name)/ sizeof(name[0]); i++) {
        printf("%p\n", &name[i]);
    }
    line();
    int z, *pz = &z;
    z = 78;
    
    printf("%p\n", pz);
   
    return 0;

}

void line () {
    printf("--------------\n");
}
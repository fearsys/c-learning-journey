#include <stdio.h>

void shout(char *s);
void whisper(char *s);
void quote(char *s);

int main() {
    char str[] = "hello world";
    void (*formatters[3])(char*) = {shout, whisper, quote};
    for (int i = 0; i < 3; i++) {
        formatters[i](str);
    }
    return 0;
}

void shout(char *s) {
    printf("SHOUT: %s\n", s);
}
void whisper(char *s) {
    printf("(whisper): %s\n", s);
}
void quote(char *s) {
    printf("\"%s\"\n", s);
}
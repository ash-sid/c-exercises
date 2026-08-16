#include <stdio.h>

int main(void) {
    int i = 1;
    char c = 'a';
    double d = 1.11;

    printf("Size of integer: %zu bytes, Address: %p\n", sizeof(i), (void *)&i);
    printf("Size of char: %zu byte, Address: %p\n", sizeof(c), (void *)&c);
    printf("Size of double %zu bytes, Address: %p\n", sizeof(d), (void *)&d);
}
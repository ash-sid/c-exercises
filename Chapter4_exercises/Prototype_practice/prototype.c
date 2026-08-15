#include <stdio.h>

//int max3(int a, int b, int c);
//int min3(int a, int b, int c);

int main(void) {

    printf("%d %d\n", max3(3, 9, 4), min3(3, 9, 4));
    return 0;
}

int max3(int a, int b, int c) {
    int m = a > b ? a : b;
    return m > c ? m : c;
}

int min3(int a, int b, int c) {
    int m = a < b ? a : b;
    return m < c ? m : c;
}
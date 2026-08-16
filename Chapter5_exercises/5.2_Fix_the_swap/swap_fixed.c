#include <stdio.h>

void swap(int *a, int *b);
void swap3(int *a, int *b, int *c);

int main(void) {

    int val1 = 1;
    int val2 = 2;
    printf("Before swap: %d, %d\n", val1, val2);

    swap(&val1, &val2); // pass adress of val1, val2 to swap function
    printf("After swap: %d, %d\n", val1, val2);

    val1 = 1;
    val2 = 2;
    int val3 = 3;
    printf("Before swapping 3 values: %d, %d, %d\n", val1, val2, val3);

    swap3(&val1, &val2, &val3);
    printf("After swapping 3 values: %d, %d, %d\n", val1, val2, val3);
}

// swap 2 values
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// rotate each value to the left once
void swap3(int *a, int *b, int *c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}
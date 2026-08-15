#include <stdio.h>

void swap(int a, int b);

int main(void) {

    int val1 = 1;
    int val2 = 2;
    printf("Before swap: %d, %d\n", val1, val2);

    // does nothing as pointer needed to simulate pass by refernece
    swap(val1, val2); 
    printf("After swap: %d, %d\n", val1, val2);

}

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
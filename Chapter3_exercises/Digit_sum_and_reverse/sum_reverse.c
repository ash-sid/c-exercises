// my answer
#include <stdio.h>

int main(void) {

    int n = 91827;
    printf("n = %d\n", n);

    int sum = 0; // sum of each digit added up
    int temp; // temp value to store each digit
    int sign = n < 0 ? -1 : 1; // store sign of value
    int rev = 0;; // reverse order of n
    while(n > 0 || n < 0) {
        temp = n % 10; // get last digit
        sum += temp; // add last digit to sum
        rev = rev * 10 + temp; // Shift left and add last digit
        n /= 10; // remove last digit 
    }

    printf("Sum of individual numbers: %d\n", sum * sign);
    printf("Reversed: %d\n", rev);
    return 0;
}
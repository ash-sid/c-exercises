// recursion methods for factorial and fibonacci
#include <stdio.h>

int factorial(int n);
int fib(int n);

int main(void) {
    printf("Factorial | Fibonacci\n");
    for (int i = 0; i <= 12; i++) {
        
        printf("        %d | %d\n", factorial(i), fib(i));
    }

    printf("%d\n", fib(35));
}

// runs in O(n) time and uses O(n) space
int factorial(int n) {
    if (n < 0) return 0; // negative factorials do not exist
    if (n <= 1) return 1; // base case

    // Recursive call
    return n * factorial(n - 1);
}

// runs in O(2^n) time and uses O(n) space
int fib(int n) {
    // base cases
    if (n <= 0) return 0;
    if (n <= 1) return 1;
    
    // Recursive call
    return fib(n - 1) + fib(n - 2);
}
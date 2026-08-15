// iterative versions for factorial and fibonacci (faster execution)
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

// runs in O(n) time and uses O(1) spaces
int factorial(int n) {
    // Negative factorials don't exist
    if (n < 0) return 0;

    int result = 1;

    // Iteratively multiply #'s from 1 to n
    for(int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// runs in O(n) time and uses O(1) space
int fib(int n) {
    // base cases
    if (n <= 0) return 0;
    if (n <= 1) return 1;

    int next; // F(n)
    int prev1 = 1; // F(n-1)
    int prev2 = 0; // F(n-2)
    for(int i = 2; i <= n; i++) {
        next = prev1 + prev2; // Next number is sum of previous two
        prev2 = prev1;        // Shift prev1 to prev2 for next step
        prev1 = next;         // Shift next to prev1 for next step
    }
    return next;
}
#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n); // prime number
int gcd(int a, int b); // Euclid's algorithm, iterative
bool is_perfect(int n); // = sum of its proper divisors

int main(void) {

    for(int i = 0; i < 10000; i++) {

    }

    for(int i = 0; i <= 200; i++) {
        printf("%d\n", is_prime(i));
    }
}

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;

    for(int i = 2; i <= n/2; i++) { // a # cannot be evenly divided by anyhing larger than its half, so use n/2 as limit
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int gcd(int a, int b) {
    // Keep looping until the second number becomes 0
    while(b != 0) {
        int temp = b; // Find the remainder of a divided by b
        b %= a;       // Move b into a for the next iteration
        a = temp;     // Move the remainder into b
    }

    // When b becomes 0, a holds the final GCD value
    return a;
}

bool is_perfect(int n) {
    return false;
}
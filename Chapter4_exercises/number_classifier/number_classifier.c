#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n); // prime number
int gcd(int a, int b); // Euclid's algorithm, iterative
bool is_perfect(int n); // = sum of its proper divisors

int main(void) {

    printf("Perfect numbers: (0 = false, 1 = true) under 10000:\n");
    for(int i = 0; i < 10000; i++) {
        if (is_perfect(i)) {
            printf("%d\n", i);
        }
    }

    printf("Twin prime pairs under 200:\n");
    for(int i = 0; i <= 200; i++) {
        if(is_prime(i) && is_prime(i + 2)) { // check if number is prime and if so if another prime within 2 numbers
            printf("%d %d\n", i, i + 2);
        }
    }
}

bool is_prime(int n) {
    // Base cases
    if (n <= 1) return false; 
    if (n == 2) return true;

    for(int i = 3; i <= n/2; i++) { // a # cannot be evenly divided by anyhing larger than its half, so use n/2 as limit
        if (n % i == 0) { // If anything divides n and leaves 0 remainder it makes it composite 
            return false;
        }
    }
    // If nothing can divide n and have 0 remainder it makes it prime
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
    if (n % 2 != 0 || n < 2) return false; // odd number can't be prime | base case

    int sum = 1;
    for(int i = 2; i <= n-1; i++) {
       if (n % i == 0) { // Find all factors of n
        sum += i;        // Add factor found to sum
       }
    }
    
    return sum == n; // if sum equals n then n is a perfect number
}
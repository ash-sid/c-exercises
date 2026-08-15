#include <stdio.h>

int main(void) {

    // if statements in for loop
    printf("Standard method involving if statements:\n");
    for(int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 ==0) {
            printf("FizzBuzz\n");
        }
        else if (i % 5 == 0) {
            printf("Buzz\n");
        }
        else if (i % 3 == 0) {
            printf("Fizz\n");
        }
        else {
            printf("%d\n", i);
        }
    }

    // Using switch on i % 15
    printf("\n\nUsing switch on i %% 15:\n");
    for (int i = 1; i < 101; i++) {
        switch (i % 15) {
            case 0:
                printf("FizzBuzz\n");
                break;
            case 3:
            case 6:
            case 9:
            case 12:
                printf("Buzz\n");
                break;
            case 5:
            case 10:
                printf("Fizz\n");
                break;
            default:
                printf("%d\n", i);
                break;
        }
    }


    // Using ternary operator
    printf("\n\nUsing ternary operator:\n");
    for (int i = 1; i < 101; i++) {
        i % 15 == 0 ? printf("FizzBuzz\n") : 
        i % 5 == 0 ? printf("Buzz\n") :
        i % 3 == 0 ? printf("Fizz\n") :
        printf("%d\n", i);
    }

    return 0;
}
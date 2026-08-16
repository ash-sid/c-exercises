#include <stdio.h>
#include <stdbool.h>

bool divmod(int num, int den, int *quot, int *rem);

int main(void) {
    int quot, rem;

    divmod(27, 4, &quot, &rem);
    printf("(%d, %d)\n", quot, rem);

    if(!divmod(27, 0, &quot, &rem)) {
        printf("Division by zero rejected\n");
    }
}

bool divmod(int num, int den, int *quot, int *rem) {
    if (den == 0) return false; // Prevent crash; division by zero
    *quot = num / den;
    *rem = num % den;
    return true;
}

// bool version better as you can return a value indicating success or failure
// void leaves no way to tell it failed or succeeded
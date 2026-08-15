#include <stdio.h>

int main(void) {

    int celsius;
    float fahrenheit;

    printf("Celsius | Farenheit\n");

    for(celsius = -40; celsius < 101; celsius += 10) {
        fahrenheit = (celsius * 1.8) + 32.0;
        printf("%7d | %.2f\n", celsius, fahrenheit);
    }

    return 0;
}

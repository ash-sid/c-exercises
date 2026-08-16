#include <stdio.h>

void safe_increment(int *p);

int main(void) {
    int i = 1;

    safe_increment(&i);
    printf("Valid pointer test: %d", i);

    safe_increment(NULL);
}

void safe_increment(int *p) {
    if (p == NULL) return;
    (*p)++;
}
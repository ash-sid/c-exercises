// solution
#include <stdio.h>

    int main(void){
        
        int n = -89521;
        int sign = n < 0 ? -1 : 1;
        int v = n * sign; /* work with the positive value */

        int sum = 0;
        int rev = 0;
        while (v > 0) {
            int d = v % 10;
            sum += d;
            rev = rev * 10 + d;
            v /= 10;
        }

        printf("n = %d\n", n);
        printf("digit sum: %d\n", sum);
        printf("reversed: %d\n", rev * sign);
        return 0;
    }
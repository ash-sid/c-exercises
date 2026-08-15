#include <stdio.h>

int main(void) {

    int i = 5;
    printf("%d %d\n", i++, i); // print first 5, then 6
    // Unspecified behaviour: no sequence point between args
    int j = 5;
    printf("%d\n" , j++ + ++j); // print 5 + 7 = 12
    // Undefined behaviour: j modified twice, no sequence point
    return 0;   

    /* First line may evaluate arguments in any order, so you 
    could get 5 6 or 5 5. The second modified j tiwce between 
    sequence points, the compiler may assume it never happens 
    and optimize.
    */
}

#include <stdio.h>

unsigned times(unsigned, unsigned);

int main () {
    unsigned a = 6;
    unsigned b = 7;
    printf("The product of %u and %u is %u.\n", a, b, times(a,b));
    return 0;
}


#include <stdio.h>
#include <stddef.h> // ptrdiff_t

int main(int argc, char const *argv[])
{
    int a = 52;
    int b = 128;

    ptrdiff_t a_minus_b = &a - &b;
    ptrdiff_t b_minus_a = &b - &a;

    printf("a_minus_b: %ld\n", a_minus_b);
    printf("b_minus_a: %ld\n", b_minus_a);
    printf("(&a)[0]:   %d\n", (&a)[0]);
    printf("(&a)[1]:   %d\n", (&a)[1]);

    return 0;
}

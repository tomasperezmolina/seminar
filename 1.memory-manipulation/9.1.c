#include <stdio.h>

union a_or_b {
    char a;
    int b;
};

int main(int argc, char const *argv[])
{
    union a_or_b x;

    printf("&x:   %p\n", &x);
    printf("&x.a: %p\n", &x.a);
    printf("&x.b: %p\n", &x.b);

    printf("\n");

    printf("sizeof(char):         %zu\n", sizeof(char));
    printf("sizeof(int):          %zu\n", sizeof(int));
    printf("sizeof(union a_or_b): %zu\n", sizeof(union a_or_b));
    
    return 0;
}

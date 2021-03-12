#include <stdio.h>

char a;
int b;

int main(int argc, char const *argv[])
{
    printf("&a: %p\n", &a);
    printf("&b: %p\n", &b);

    printf("&a - &b (in bytes): %ld\n", &a - (char *) &b);
    return 0;
}
#include <stdio.h>

char a;
int b;
char c;
char d;
char e;

int main(int argc, char const *argv[])
{
    printf("&d: %p\n", &d);
    printf("&b: %p\n", &b);
    printf("&e: %p\n", &e);
    printf("&c: %p\n", &c);
    printf("&a: %p\n", &a);
    return 0;
}
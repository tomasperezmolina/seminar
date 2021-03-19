#include <stdio.h>

void print_automatic_vars() {
    int i;
    char c;
    char *p;
    float f;

    printf("i: %d\n", i);
    printf("c: %c\n", c);
    printf("p: %p\n", p);
    printf("f: %f\n", f);
}

int main(int argc, char const *argv[])
{
    print_automatic_vars();
    return 0;
}

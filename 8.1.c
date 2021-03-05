#include <stdio.h>

struct data { 
    char a;
    int b;
};

int main(int argc, char const *argv[])
{
    struct data x;
    printf("sizeof(struct data): %zu\n", sizeof(struct data));
    printf("Address of x:        %p\n", &x);
    printf("\n");
    printf("Address of a:        %p\n", &x.a);
    printf("Address of b:        %p\n", &x.b);
    return 0;
}

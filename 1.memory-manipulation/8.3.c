#include <stdio.h>

struct data_2 { 
    int b;
    char a;
};

int main(int argc, char const *argv[])
{
    struct data_2 x;
    printf("sizeof(struct data_2): %zu\n", sizeof(struct data_2));
    printf("Address of x:        %p\n", &x);
    printf("\n");
    printf("Address of b:        %p\n", &x.b);
    printf("Address of a:        %p\n", &x.a);
    return 0;
}

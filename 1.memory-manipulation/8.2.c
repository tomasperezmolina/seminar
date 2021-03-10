#include <stdio.h>

struct data { 
    char a;
    int b;
};

struct data_2 { 
    int b;
    char a;
};

int main(int argc, char const *argv[])
{
    printf("sizeof(struct data):   %zu\n", sizeof(struct data));
    printf("sizeof(struct data_2): %zu\n", sizeof(struct data_2));
    return 0;
}

#include <stdio.h>

struct data_2 { 
    int b;
    char a;
};

int main(int argc, char const *argv[])
{
    struct data_2 array[2];
    printf("Address of array[0]: %p\n", &array[0]);
    printf("Address of array[1]: %p\n", &array[1]);
    return 0;
}

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char *c_ptr = (char *) malloc(sizeof(char));
    int *i_ptr = (int *) malloc(sizeof(int));

    printf("c_ptr: %p\n", c_ptr);
    printf("i_ptr: %p\n", i_ptr);
    printf("---------------\n");
    printf("c: %c\n", *c_ptr);
    printf("i: %d\n", *i_ptr);

    *c_ptr = 'c';
    *i_ptr = 5;
    printf("---------------\n");
    printf("c: %c\n", *c_ptr);
    printf("i: %d\n", *i_ptr);

    return 0;
}

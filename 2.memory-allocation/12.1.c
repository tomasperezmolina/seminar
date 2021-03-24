#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char *c_ptr = malloc(sizeof(char));
    int *i_ptr = malloc(sizeof(int));

    printf("c_ptr: %p\n", c_ptr);
    printf("i_ptr: %p\n", i_ptr);
    printf("------------\n");

    void *ptr = c_ptr;
    printf("c_ptr: %p\n", ptr);
    ptr = i_ptr;
    printf("i_ptr: %p\n", ptr);

    return 0;
}

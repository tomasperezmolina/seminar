#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int *array = malloc(sizeof(int) * 20);
    printf("array before:       %p\n", array);
    // grow
    array = realloc(array, sizeof(int) * 50);
    printf("array after grow:   %p\n", array);
    // shrink
    array = realloc(array, sizeof(int) * 10);
    printf("array after shrink: %p\n", array);
    free(array);

    return 0;
}

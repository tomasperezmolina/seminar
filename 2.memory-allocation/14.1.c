#include <stdlib.h>
#include <stdio.h>

#define ARRAY_SIZE 10

int main(int argc, char const *argv[])
{
    int *array = calloc(ARRAY_SIZE, sizeof(int));

    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d, ", array[i]);
    }
    printf("\n");

    return 0;
}

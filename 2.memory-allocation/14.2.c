#include <stdlib.h>
#include <stdio.h>

#define ARRAY_SIZE 10

int main(int argc, char const *argv[])
{
    int *array_calloc = calloc(ARRAY_SIZE, sizeof(int));
    int *array_malloc = malloc(ARRAY_SIZE * sizeof(int));

    printf("calloc: ");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d, ", array_calloc[i]);
    }
    printf("\n");

    printf("malloc: ");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d, ", array_malloc[i]);
    }
    printf("\n");


    return 0;
}

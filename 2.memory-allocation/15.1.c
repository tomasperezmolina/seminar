#include <stdlib.h>
#include <stdio.h>

#define ARRAY_SIZE 10

void fillArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        array[i] = i;
    }
}

void printArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d, ", array[i]);
    }

}

int main(int argc, char const *argv[])
{
    int *array_calloc = calloc(ARRAY_SIZE, sizeof(int));
    int *array_malloc = malloc(ARRAY_SIZE * sizeof(int));

    printf("calloc: ");
    printArray(array_calloc, ARRAY_SIZE);
    printf("\n");

    printf("malloc: ");
    printArray(array_malloc, ARRAY_SIZE);
    printf("\n");

    fillArray(array_calloc, ARRAY_SIZE);
    fillArray(array_malloc, ARRAY_SIZE);

    printf("calloc: ");
    printArray(array_calloc, ARRAY_SIZE);
    printf("\n");

    printf("malloc: ");
    printArray(array_malloc, ARRAY_SIZE);
    printf("\n");

    free(array_calloc);
    free(array_malloc);

    printf("---------------------\n");

    int *array_calloc_2 = calloc(ARRAY_SIZE, sizeof(int));
    int *array_malloc_2 = malloc(ARRAY_SIZE * sizeof(int));

    printf("calloc: ");
    printArray(array_calloc_2, ARRAY_SIZE);
    printf("\n");

    printf("malloc: ");
    printArray(array_malloc_2, ARRAY_SIZE);
    printf("\n");

    fillArray(array_calloc_2, ARRAY_SIZE);
    fillArray(array_malloc_2, ARRAY_SIZE);

    printf("calloc: ");
    printArray(array_calloc_2, ARRAY_SIZE);
    printf("\n");

    printf("malloc: ");
    printArray(array_malloc_2, ARRAY_SIZE);
    printf("\n");

    free(array_calloc_2);
    free(array_malloc_2);

    return 0;
}
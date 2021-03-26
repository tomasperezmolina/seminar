#include <stdlib.h>
#include <stdio.h>

// Previously with automatic allocation (6.4.c)
int *allocate_array_stack(int n) {
    int array[n];
    printf("In function:\n");
    for (int i = 0; i < n; i++) {
        printf("array[%d]: %d\n", i, array[i]);
    }
    return array;
}

int *allocate_array_malloc(int n) {
    int *array = malloc(sizeof(int) * n);
    printf("In function:\n");
    for (int i = 0; i < n; i++) {
        printf("array[%d]: %d\n", i, array[i]);
    }
    return array;
}


int main(int argc, char const *argv[])
{
    int array_size = 5;
    printf("Dynamic allocation:\n");
    int *array = allocate_array_malloc(array_size);
    printf("-------------------------\n");
    printf("In main:\n");
    for (int i = 0; i < array_size; i++) {
        printf("array[%d]: %d\n", i, array[i]);
    }
    free(array);

    printf("--------------------------------------------\n");

    printf("Automatic allocation:\n");
    int *stack_array = allocate_array_stack(array_size);
    printf("-------------------------\n");
    printf("In main:\n");
    for (int i = 0; i < array_size; i++) {
        printf("array[%d]: %d\n", i, stack_array[i]);
    }

    return 0;
}
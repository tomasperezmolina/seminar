#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array_size = 5;
    int *array;

    // Block, array_inner only exists inside 
    {
        int array_inner[array_size];
        for (int i = 0; i < array_size; i++) {
            printf("before array_inner[%d]: %d\n", i, array_inner[i]);
            array_inner[i] = i;
        }
        printf("---\n");

        for (int i = 0; i < array_size; i++) {
            printf("after array_inner[%d]:  %d\n", i, array_inner[i]);
        }
        array = array_inner;
    }

    getchar(); // Suspense
    printf("----------------\n");
    
    for (int i = 0; i < array_size; i++) {
        printf("array[%d]: %d\n", i, array[i]);
    }

    return 0;
}

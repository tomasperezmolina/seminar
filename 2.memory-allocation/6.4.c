#include <stdio.h>

int *allocate_array(int n) {
    int array[n];
    printf("In function:\n");
    for (int i = 0; i < n; i++) {
        printf("array[%d]: %d\n", i, array[i]);
    }
    return array;
}

int main(int argc, char const *argv[])
{
    int array_size = 10;
    int *array = allocate_array(array_size);
    printf("-------------------------\n");
    printf("In main:\n");
    for (int i = 0; i < array_size; i++) {
        printf("array[%d]: %d\n", i, array[i]);
    }

    return 0;
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numbers[] = {0, 1, 2, 3, 4, 5};
    int array_size = 6;

    for (int i = 0; i < array_size; i++) {
        printf("%d\n", numbers[i]);
    }
    printf("---------------------\n");

    int *curr = numbers; // Need separate pointer as ++ modifies its value.
    for (int i = 0; i < array_size; i++) {
        printf("%d\n", *curr);
        curr++;
    }

    return 0;
}

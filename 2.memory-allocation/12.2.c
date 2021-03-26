#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    for(int i = 0; i < 10; i++) {
        int *n_ptr = (int *) malloc(sizeof(int));
        printf("n: %d\n", *n_ptr);
    }

    return 0;
}
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 5;

    int *pointer_to_i = &i;

    printf("before %d\n", i);
    *pointer_to_i = 0;
    printf("after  %d\n", i);

    return 0;
}

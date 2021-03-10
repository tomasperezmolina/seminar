#include <stdio.h>

/**
 * Performs a / b and stores the result in o.
 * Returns 0 if divison was perform correctly, 1 if b == 0.
 */
int safe_division(int a, int b, int *o) {
    if (b == 0) {
        return 1;
    }
    else {
        *o = a / b;
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    int i = 5;
    int y = 2;

    int res;

    if(safe_division(i, y, &res) == 0) {
        printf("%d\n", res);
    } else {
        printf("y is zero!\n");
    }

    int z = 0;

    if(safe_division(i, z, &res) == 0) {
        printf("%d\n", res);
    } else {
        printf("z is zero!\n");
    } 

    return 0;
}
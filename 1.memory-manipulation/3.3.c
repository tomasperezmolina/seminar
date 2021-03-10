#include <stdio.h>

struct res {
    int val;
    int error;
};

/**
 * Performs a / b.
 * Returns the a/b plus an error code which is 1 if b == 0, and 0 if the operation was ok.
 * When the error value is != 0, val is undefined.
 */
struct res safe_division(int a, int b) {
    struct res result;
    if (b == 0) {
        result.error = 1;
    }
    else {
        result.val = a / b;
        result.error = 0;
    }
    return result;
}

int main(int argc, char const *argv[])
{
    int i = 5;
    int y = 2;

    struct res result;

    result = safe_division(i, y);

    if (result.error == 0) {
        printf("%d\n", result.val);
    } else {
        printf("y is zero!\n");
    }

    int z = 0;
    result = safe_division(i, z);

    if (result.error == 0) {
        printf("%d\n", result.val);
    } else {
        printf("z is zero!\n");
    }

    return 0;
}
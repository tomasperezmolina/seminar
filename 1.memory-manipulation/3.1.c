#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 5;
    int z = 0;

    int res = i / z; // division by zero error

    printf("%d\n", res);
    return 0;
}

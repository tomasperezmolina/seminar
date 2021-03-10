#include <stdio.h>

void set_to_zero(int i) {
    i = 0;
}

int main(int argc, char const *argv[])
{
    int i = 5;

    printf("before setToZero %d\n", i);
    set_to_zero(i);
    printf("after  setToZero %d\n", i);

    return 0;
}
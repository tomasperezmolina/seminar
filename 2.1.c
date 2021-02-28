#include <stdio.h>

void setToZero(int i) {
    i = 0;
}

int main(int argc, char const *argv[])
{
    int i = 5;

    printf("before setToZero %d\n", i);
    setToZero(i);
    printf("after  setToZero %d\n", i);

    return 0;
}
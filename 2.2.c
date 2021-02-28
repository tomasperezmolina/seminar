#include <stdio.h>

void setToZeroPtr(int *ptr) {
    *ptr = 0;
}

int main(int argc, char const *argv[])
{
    int i = 5;
    
    printf("before setToZeroPtr %d\n", i);
    setToZeroPtr(&i);
    printf("after  setToZeroPtr %d\n", i);

    return 0;
}
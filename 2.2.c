#include <stdio.h>

void set_to_zero_ptr(int *ptr) {
    *ptr = 0;
}

int main(int argc, char const *argv[])
{
    int i = 5;
    
    printf("before setToZeroPtr %d\n", i);
    set_to_zero_ptr(&i);
    printf("after  setToZeroPtr %d\n", i);

    return 0;
}
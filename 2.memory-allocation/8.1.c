#include <stdio.h>

void hello() {
    static int times_called;
    times_called += 1;
    printf("Hello! I was called %d times\n", times_called);
}

void nothing_weird() {
    int *arr[10];
    printf("%p\n", arr);
    printf("%p\n", &arr[13]);

    arr[13] = &hello;
}


int main(int argc, char const *argv[])
{
    hello();
    nothing_weird();

    return 0;
}

/**
 * gdb 8.1.out
 * b 8.1.c:11
 * info frame
 * 
 * 
 * sIP at 0x7fffffffdbb8
 * arr at 0x7fffffffdb50
 * 
 * &sIP - &arr = 104
 * 104 / sizeof(int *) = 13
 * 
 * &arr[13] == &sIP
 */

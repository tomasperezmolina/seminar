#include <stddef.h>
#include <stdio.h>

// sudo apt-get install gcc-multilib

int main(int argc, char const *argv[])
{
    size_t char_size = sizeof(char);
    printf("sizeof(char): %zu\n", char_size);
    size_t int_size = sizeof(int);
    printf("sizeof(int): %zu\n", int_size);
    printf("sizeof(long): %zu\n", sizeof(long));
    printf("sizeof(long long): %zu\n", sizeof(long long));
    printf("sizeof(float): %zu\n", sizeof(float));
    printf("sizeof(double): %zu\n", sizeof(double));

    return 0;
}

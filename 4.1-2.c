#include <stddef.h>
#include <stdio.h>

// sudo apt-get install gcc-multilib

int main(int argc, char const *argv[])
{
    size_t char_size = sizeof(char);
    printf("sizeof(char):           %zu\n", char_size);
    printf("\n");
    size_t int_size = sizeof(int);
    printf("sizeof(int):            %zu\n", int_size);
    printf("sizeof(unsigned int):   %zu\n", sizeof(unsigned int));
    printf("sizeof(long):           %zu\n", sizeof(long));
    printf("sizeof(long long):      %zu\n", sizeof(long long));
    printf("\n");
    printf("sizeof(float):          %zu\n", sizeof(float));
    printf("sizeof(double):         %zu\n", sizeof(double));    
    printf("\n");
    printf("sizeof(char*):          %zu\n", sizeof(char*));
    printf("sizeof(int*):           %zu\n", sizeof(int*));
    printf("sizeof(size_t*):        %zu\n", sizeof(size_t*));
    printf("\n");
    printf("sizeof(size_t):         %zu\n", sizeof(size_t));
    printf("sizeof(size_t) in bits: %zu bits\n", sizeof(size_t) * 8);

    return 0;
}

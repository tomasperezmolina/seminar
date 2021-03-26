#include <stdio.h>

int main(int argc, char const *argv[])
{
    char *data = "Data";
    char stack[] = "Stack";
    printf("Data:   %p\n", data);
    printf("&Data:  %p\n", &data);
    printf("Stack:  %p\n", stack);
    printf("&Stack: %p\n", &stack);
    return 0;
}

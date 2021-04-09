#include <stdio.h>

int function(int a);

int main(int argc, char const *argv[])
{
    int i = 5;
    printf("i: %d\n", i);
    printf("function(i): %d\n", function(i));
    return 0;
}

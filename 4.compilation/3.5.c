#include <stdio.h>

int function(int a, int b, int c);

int main(int argc, char const *argv[])
{
    int i = 5;
    printf("i: %d\n", i);
    printf("function(i): %d\n", function());
    return 0;
}

int function(int a, int b, int c) {
    return a + b + c;
}

#include <stdio.h>

void function() {
    printf("hello!\n");
}

int main(int argc, char const *argv[])
{
    void (*f)() = &function;
    f();
    return 0;
}

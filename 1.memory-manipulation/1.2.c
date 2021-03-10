#include <stdio.h>

int main(int argc, char const *argv[])
{    
    char c = 'a';
    char *pointer_to_c = &c;


    printf("c value:             %c\n", c);
    printf("*pointer_to_c value: %c\n", *pointer_to_c); // *pointer_to_c: dereference pointer_to_c, getting us the value of c.

    return 0;
}

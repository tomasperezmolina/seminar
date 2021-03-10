#include <stdio.h>

int main(int argc, char const *argv[])
{
    char c = 'a';
    char *pointer_to_c = &c; // &c: get pointer to c

    printf("pointer_to_c value:  %p\n", pointer_to_c);
    printf("&c value:            %p\n", &c);
    printf("&pointer_to_c value: %p\n", &pointer_to_c);

    return 0;
}

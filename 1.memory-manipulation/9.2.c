#include <stdio.h>

union a_or_b {
    char a;
    int b;
};

int main(int argc, char const *argv[])
{
    union a_or_b x;

    x.a = 'm';
    printf("x.a: %c\n", x.a);
    printf("x.b: %d\n", x.b);
    printf("\n");

    x.b = 123456;
    printf("x.a: %c\n", x.a);
    printf("x.b: %d\n", x.b);
    printf("\n");

    char *pointer_to_x_char = (char *) &x;
    char b_bytes[] = {pointer_to_x_char[0], pointer_to_x_char[1], pointer_to_x_char[2], pointer_to_x_char[3]};

    x.a = 'w';
    printf("x.a: %c\n", x.a);
    printf("x.b: %d\n", x.b);
    printf("\n");

    for(int i = 0; i < 4; i ++) {
        printf("Byte %d is equal: %d\n", i, b_bytes[i] == pointer_to_x_char[i]);
    }
    
    return 0;
}

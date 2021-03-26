#include <stdio.h>

void print_hello_static() {
    char *str = "hello static!";
    printf("%s\n", str);
    str[0] = 'i';
    printf("%s\n", str);
}

void print_hello_stack() {
    char str[] = "hello stack!";
    printf("%s\n", str);
    str[0] = 'i';
    printf("%s\n", str);
}


int main(int argc, char const *argv[])
{
    for(int i = 0; i < 3; i++) {
        print_hello_stack();
    }

    for(int i = 0; i < 3; i++) {
        print_hello_static();
    }
    return 0;
}

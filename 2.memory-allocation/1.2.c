#include <stdio.h>

#define REPETITIONS 10

int get_i() {
    int i = 0;
    return i++;
}

int get_i_static() {
    static int i = 0;
    return i++;
}

int main(int argc, char const *argv[])
{
    for(int i = 0; i < REPETITIONS; i++) {
        printf("i:        %d\n", get_i());
        printf("static i: %d\n", get_i_static());
        printf("--------------------\n");
    }

    return 0;
}

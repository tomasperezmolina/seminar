#include <stdio.h>

int int_function() {
    return 5;
}

int max(int a, int b) {
    return a > b ? a : b;
}

int main(int argc, char const *argv[])
{
    int (*f)() = &int_function;
    int num = f();
    printf("Got %d\n", num);

    int (*g1)(int a, int b) = &max;
    int res1 = g1(2, 8);
    printf("Got %d\n", res1);

    int (*g2)(int, int) = &max; // Parameter names are optional
    int res2 = g2(80, 8);
    printf("Got %d\n", res2);


    return 0;
}

#include <stdio.h>

struct base_data { 
    char a;
    int b;
};

struct extra_data {
    char a;
    int b;
    int x;
    int y;
};

void print_base_data(struct base_data *data) {
    printf("base_data  { a: %c, b: %d }\n", data->a, data->b);
}   

void print_extra_data(struct extra_data *data) {
    printf("extra_data { a: %c, b: %d, x: %d, y: %d }\n", data->a, data->b, data->x, data->y);
}

int main(int argc, char const *argv[])
{
    struct base_data x = {'c', 5};
    struct extra_data y = {'Z', -2, 10, 20};

    printf("x: ");
    print_base_data(&x);
    printf("\n");
    printf("y: ");
    print_extra_data(&y);
    printf("\n");
    printf("y: ");
    print_base_data((struct base_data *) &y);
    printf("\n");
    printf("x: ");
    print_extra_data((struct extra_data *) &x); // Undefined
    return 0;
}

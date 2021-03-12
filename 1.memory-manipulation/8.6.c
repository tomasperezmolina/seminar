#include <stdio.h>

struct base_data { 
    char a;
    int b;
};

struct other_data { // Name does not matter
    char character;
    int number;
};

struct bad_data { // Order DOES matter
    int b;
    char a;
};


void print_base_data(struct base_data *data) {
    printf("base_data  { a: %c, b: %d }\n", data->a, data->b);
}   


int main(int argc, char const *argv[])
{
    struct base_data x = {'c', 5};
    struct other_data y = {'x', 93};
    struct bad_data z = {0, 'M'};

    printf("x: ");
    print_base_data(&x);
    printf("\n");
    printf("y: ");
    print_base_data((struct base_data *) &y);
    printf("\n");
    printf("z: ");
    print_base_data((struct base_data *) &z); // Undefined
    return 0;
}

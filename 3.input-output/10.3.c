#include <stdio.h>

int fold(int *array, size_t size, int (*f)(int, int), int initial) {
    int res = initial;
    for (size_t i = 0; i < size; i++) {
        res = f(array[i], res);
    }
    return res;
}

int sum(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int main(int argc, char const *argv[])
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    size_t numbers_len = 10;
    int total = fold(numbers, numbers_len, &sum, 0);
    printf("Total: %d\n", total);
    int product = fold(numbers, numbers_len, &multiply, 1);
    printf("Product: %d\n", product);
    
    return 0;
}

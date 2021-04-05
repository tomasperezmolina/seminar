#include <stdio.h>

int filter(int *array, size_t size, int (*f)(int), int *out) {
    int j = 0;
    for (size_t i = 0; i < size; i++) {
        if (f(array[i])) {
            out[j] = array[i];
            j++;
        }
    }
    return j;
}

int greater_than15(int a) {
    return a > 15;
}

int negative(int a) {
    return a < 0;
}

int main(int argc, char const *argv[])
{
    int numbers[] = {12, 28, 0, -4, 55, 93, 27, 8, 154, -1023};
    int gt_15[10];
    int negatives[10];
    int gt_15amt = filter(numbers, 10, &greater_than15, gt_15);
    int negative_amt = filter(numbers, 10, &negative, negatives);

    printf("Greater than 15:    ");
    for(int i = 0; i < gt_15amt; i++) {
        printf("%d, ", gt_15[i]);
    }
    printf("\n");

    printf("Negatives:          ");
    for(int i = 0; i < negative_amt; i++) {
        printf("%d, ", negatives[i]);
    }
    printf("\n");
    
    return 0;
}
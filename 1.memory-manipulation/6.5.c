#include <stdio.h>

int main(int argc, char const *argv[])
{
    char word[] = {'d', 'u', 'c', 'k'};
    int numbers[] = {0, 1, 2, 3};

    printf("word:             %p\n", word);
    printf("word - 1:         %p\n", word - 1);
    printf("*(word - 1):      %c\n", *(word - 1));
    printf("word[-1]:         %c\n", word[-1]);
    printf("\n");

    printf("numbers:          %p\n", numbers);
    printf("numbers - 1:      %p\n", numbers - 1);
    printf("*(numbers - 1):   %d\n", *(numbers - 1));
    printf("numbers[-1]:      %d\n", numbers[-1]);
    printf("\n");


    return 0;
}

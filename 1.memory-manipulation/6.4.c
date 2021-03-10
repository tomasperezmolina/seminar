#include <stdio.h>

int main(int argc, char const *argv[])
{
    char word[] = {'d', 'u', 'c', 'k'};
    int numbers[] = {0, 1, 2, 3};

    printf("word:          %p\n", word);
    printf("word + 1:      %p\n", word + 1);
    printf("sizeof(char):  %zu\n", sizeof(char));
    printf("\n");

    printf("numbers:       %p\n", numbers);
    printf("numbers + 1:   %p\n", numbers + 1);
    printf("sizeof(int):   %zu\n", sizeof(int));

    return 0;
}

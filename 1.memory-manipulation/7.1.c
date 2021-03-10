#include <stdio.h>

int main(int argc, char const *argv[])
{
    char str[] = {'d', 'u', 'c', 'k', '\0'};

    printf("While loop:  ");
    char *curr = str;
    while ((*curr) != '\0') {
        printf("%c", *curr);
        curr++;
    }
    printf("\n");

    printf("Just printf: %s\n", str);
    printf("\n");

    char *cliche = "Hello, world!";

    printf("%s\n", cliche);

    return 0;
}
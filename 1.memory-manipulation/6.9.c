#include <stdio.h>

int main(int argc, char const *argv[])
{
    char end = '.'; // Choose an arbitrary marker for the end. All words end in '.'
    char word[] = {'d', 'u', 'c', 'k', end};

    char *curr = word; 
    while ((*curr) != end) {
        printf("%c", *curr);
        curr++;
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char word[] = {'d', 'u', 'c', 'k'};
    char *ptr = word; // The variable word IS a pointer to the first element of the array
    word = ptr; // This would be like overwriting the array with a pointer
    // gcc: "error: assignment to expression with array type"

    return 0;
}

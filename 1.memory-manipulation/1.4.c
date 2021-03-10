#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 5;

    int *pointer_to_i = &i;
    int *int_nullptr = NULL;
    
    printf("pointer_to_i == int_nullptr: ");
    if (pointer_to_i == int_nullptr) { // Clearer than 0 / 1
        printf("true\n");
    } else {
        printf("false\n");
    }

    char *char_nullptr = NULL;

    printf("int_nullptr == char_nullptr: ");
    if (int_nullptr == char_nullptr) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    printf("\n");

    printf("Dereferencing int_nullptr\n");
    printf("*int_nullptr: %d", *int_nullptr);

    return 0;
}

#include <stdio.h>
#include <stddef.h> // ptrdiff_t

int main(int argc, char const *argv[])
{
    int numbers[] = {0, 1, 2, 3};
    int *ptr_to_0 = numbers;
    int *ptr_to_3 = &numbers[3];

    ptrdiff_t offset_dif = ptr_to_3 - ptr_to_0;
    ptrdiff_t offset_dif_backwards = ptr_to_0 - ptr_to_3;

    printf("ptr_to_0:             %p\n", ptr_to_0);
    printf("ptr_to_3:             %p\n", ptr_to_3);
    printf("offset_dif:           %ld\n", offset_dif);
    printf("offset_dif_backwards: %ld\n", offset_dif_backwards);

    return 0;
}

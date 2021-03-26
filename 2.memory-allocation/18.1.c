#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void do_something() {
    int *numbers = malloc(10 * sizeof(int));
    printf("Did something\n");
    // Leak, the numbers pointer can never be freed
}

void do_something_if(int condition) {
    int *numbers = malloc(10 * sizeof(int));
    if (!condition) {
        return; // Leak, we return early and won't be able to free numbers
    }

    printf("Did something\n");
    free(numbers);
}

void do_something_with_strings() {
    const char *str = "A string!";  // statically allocated, should not be modified
    char *modifiable = strdup(str);
    modifiable[0] = 'B';
    printf("%s\n", modifiable);
    // Leak, strdup returns a malloc'd string
}

void do_something_loop() {
    for(int i = 0; i < 10; i++) {
        int *numbers = malloc(10 * sizeof(int));
        // Leak, each time we will reenter the block the numbers variable will be overwritten.
    }
}

int main(int argc, char const *argv[])
{
    do_something();
    do_something_if(0);
    do_something_with_strings();
    do_something_loop();
    return 0;
}

/**
valgrind --leak-check=full \
    --show-leak-kinds=all \
    --track-origins=yes \
    ./build/2.memory-allocation/18.1.out
 */


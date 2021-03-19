#include <stdio.h>

int get_five() {
    int five;
    printf("&five: %p\n", &five);
    return five;
}


void function() {
    int i, j;
    printf("&i: %p\n", &i);
    printf("&j: %p\n", &j);
    i = get_five();
    j = get_five();
}


int main(int argc, char const *argv[])
{
    function();
    return 0;
}

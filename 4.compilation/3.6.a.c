#include <stdio.h>
#include "3.6.b.h"
#include "3.6.c.h" // c includes b, duplicating the declarations

int main(int argc, char const *argv[])
{
    struct point p1 = {1, 2};
    printf("function(get_x(p1)): %d\n", function(get_x(p1)));
    return 0;
}

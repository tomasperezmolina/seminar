#include <stdio.h>
#include "3.7.b.h"
#include "3.7.c.h"

int main(int argc, char const *argv[])
{
    struct point p1 = {1, 2};
    printf("function(get_x(p1)): %d\n", function(get_x(p1)));
    return 0;
}

#include <stdio.h>


struct point2D {
    int x;
    int y;
};

void set_x(struct point2D point, int x) {
    point.x = x;
}

void set_x_ptr(struct point2D *point, int x) {
    (*point).x = x; // ugly, annoying to type
    point->x = x;   // better
}

int main(int argc, char const *argv[])
{
    struct point2D point = {0, 0};
    printf("point before:       %d, %d\n", point.x, point.y);
    set_x(point, 5);
    printf("point after (val):  %d, %d\n", point.x, point.y);
    set_x_ptr(&point, 5);
    printf("point after (ref):  %d, %d\n", point.x, point.y);
    return 0;
}

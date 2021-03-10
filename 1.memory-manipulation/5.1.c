#include <stdio.h>

struct point2D {
    int x;
    int y;
};

struct point3D {
    int x;
    int y;
    int z;
};

struct date {
    unsigned int day;
    unsigned int month;
    unsigned int year;
};

struct person {
    char name[100];
    unsigned int age;
    struct date date_of_birth;
};

int main(int argc, char const *argv[])
{
    printf("sizeof(struct point2D): %zu\n", sizeof(struct point2D));
    printf("sizeof(struct point3D): %zu\n", sizeof(struct point3D));
    printf("sizeof(struct person):  %zu\n", sizeof(struct person));
    printf("\n");
    printf("sizeof(struct person*): %zu\n", sizeof(struct person*));
    return 0;
}

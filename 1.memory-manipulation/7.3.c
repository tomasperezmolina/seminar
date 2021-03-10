#include <stdio.h>

struct user_data {
    char username[10];
    char password[10];
};

int main(int argc, char const *argv[])
{
    struct user_data users[] = {
        {"john", "password"},
        {{'i', 'n', '\0', 'c', 'o', 'm', 'p', 'l', 'e', 't'}, "12345678"},
        {{'h', 'a', 'c', 'k', 'e', 'r', 'm', 'a', 'n', '!'}, "secret"}
    };

    for (int i = 0; i < 3; i++) {
        printf("Welcome %s\n", users[i].username);
        printf("\n");
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 10

struct user_data {
    char username[BUFFER_SIZE];
    char password[BUFFER_SIZE];
};

int main(int argc, char const *argv[])
{
    struct user_data credentials;
    char *input_username = "this is my name";
    char *input_password = "password";

    strncpy(credentials.username, input_username, BUFFER_SIZE - 1); 
    credentials.username[BUFFER_SIZE - 1] = '\0';
    printf("Welcome %s! Please enter your password\n", credentials.username);
    printf("\n");

    getchar();

    strncpy(credentials.password, input_password, BUFFER_SIZE - 1); 
    credentials.password[BUFFER_SIZE - 1] = '\0';
    printf("Bye %s!\n", credentials.username);

    return 0;
}
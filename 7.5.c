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

    strcpy(credentials.username, input_username); 
    printf("Welcome %s! Please enter your password\n", credentials.username);
    printf("\n");

    getchar();

    strcpy(credentials.password, input_password); 
    printf("Bye %s!\n", credentials.username);

    return 0;
}
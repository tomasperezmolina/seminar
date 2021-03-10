#include <stdio.h>
#include <string.h>

// We will store at most 10 characters (including the null terminator) in each field.
#define BUFFER_SIZE 10

struct user_data {
    char username[BUFFER_SIZE];
    char password[BUFFER_SIZE];
};

int main(int argc, char const *argv[])
{
    struct user_data credentials;
    char *input_username = "john";
    char *input_password = "password";

    // We can't do credentials.username = input_username (arrays are not pointers).
    strcpy(credentials.username, input_username); 
    printf("Welcome %s! Please enter your password\n", credentials.username);
    printf("\n");

    getchar(); // Wait for enter

    strcpy(credentials.password, input_password); 
    printf("Bye %s!\n", credentials.username);

    return 0;
}
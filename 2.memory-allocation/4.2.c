#include <stdio.h>
#include <string.h>

#define ENTER_NAME_OPTION 1
#define VIEW_NAME_OPTION 2
#define EXIT_OPTION 0
#define OPTION_ERROR -1

char name[124];

int get_option() {
    char buffer[50];
    int option;
    fgets(buffer, sizeof(buffer), stdin);
    if (1 == sscanf(buffer, "%d", &option)) {
        return option;
    } else {
        return OPTION_ERROR;
    }
}

void get_name() {
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; // Replace \n with \0
    printf("Name saved!\n");
}

void view_name() {
    if (name[0] == '\0') {
        printf("No name saved\n");
    } else {
        printf("Name: %s\n", name);
    }
}

int main(int argc, char const *argv[])
{
    printf("Name address: %p\n", name);
    int run = 1;
    while (run) {
        printf("\n\n");
        printf("----MENU----\n");
        printf("%d. Enter name\n", ENTER_NAME_OPTION);
        printf("%d. View name\n", VIEW_NAME_OPTION);
        printf("%d. Exit\n", EXIT_OPTION);
        printf("Select an option: \n");
        switch (get_option()) {
            case ENTER_NAME_OPTION:
                get_name();
                break;
            case VIEW_NAME_OPTION:
                view_name();
                break;
            case EXIT_OPTION:
                printf("Exiting\n");
                run = 0;
                break;
            case OPTION_ERROR:
                printf("Please enter a number\n");
                break;
        }
    }
    return 0;
}
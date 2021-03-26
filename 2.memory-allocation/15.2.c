#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ALLOC_SMALL_OPTION 1
#define ALLOC_LARGE_OPTION 2
#define FREE_OPTION 3
#define FREE_ALL_OPTION 4
#define EXIT_OPTION 0
#define OPTION_ERROR -1

#define MAX_ALLOCATIONS 100

#define BYTES_IN_KB 1024

#define SMALL_REGION_SIZE_KB 1
#define LARGE_REGION_SIZE_KB 2000

void *allocations[MAX_ALLOCATIONS];
size_t next = 0;

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

int main(int argc, char const *argv[])
{
    int run = 1;
    while (run) {
        printf("\n\n");
        printf("----MENU----\n");
        printf("%d. Allocate small region (%d kb)\n", ALLOC_SMALL_OPTION, SMALL_REGION_SIZE_KB);
        printf("%d. Allocate large region (%d kb)\n", ALLOC_LARGE_OPTION, LARGE_REGION_SIZE_KB);
        printf("%d. Free last allocation\n", FREE_OPTION);
        printf("%d. Free all allocations\n", FREE_ALL_OPTION);
        printf("%d. Exit\n", EXIT_OPTION);
        printf("Select an option: \n");
        switch (get_option()) {
            case ALLOC_SMALL_OPTION:
                if (next < MAX_ALLOCATIONS) {
                    allocations[next++] = malloc(SMALL_REGION_SIZE_KB * BYTES_IN_KB);
                } else {
                    printf("Allocation limit reached!\n");
                }
                break;
            case ALLOC_LARGE_OPTION:
                if (next < MAX_ALLOCATIONS) {
                    allocations[next++] = malloc(LARGE_REGION_SIZE_KB * BYTES_IN_KB);
                } else {
                    printf("Allocation limit reached!\n");
                }
                break;
            case FREE_OPTION:
                if (next > 0) {
                    free(allocations[--next]);
                } else {
                    printf("No allocations!\n");
                }
                break;
            case FREE_ALL_OPTION:
                for (int i = 0; i < next; i++) {
                    free(allocations[i]);
                }
                next = 0;
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

/*
top 
'o' for new filter
Filter: COMMAND=15.2.out
'=' to reset filters
'e' to change memory unit (default is kb)
*/
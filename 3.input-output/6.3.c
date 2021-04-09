#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>

int main(int argc, char const *argv[])
{
    int res = close(42);
    if (res == -1) {
        printf("errno: %d\n", errno);
        perror("close");
        return -1;
    }
    return 0;
}
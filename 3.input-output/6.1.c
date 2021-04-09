#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

#define BUF_SIZE 240

int main(int argc, char const *argv[])
{
    int fd = open("does-not-exist.txt", O_RDONLY);
    if (fd == -1) {
        printf("errno: %d\n", errno);
        printf("strerror: %s\n", strerror(errno));
        perror("open");
        return -1;
    }
    close(fd);
    return 0;
}

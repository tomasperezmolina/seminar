#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

#define BUF_SIZE 240

int main(int argc, char const *argv[])
{
    int fd = open("3.input-output/1.1.txt", O_RDONLY);
    if (fd == -1) {
        printf("errno: %d\n", errno);
        perror("open");
        return -1;
    }
    const char *str = "I wrote this\n";
    ssize_t bytes_written = write(fd, str, strlen(str));
    if (bytes_written == -1) {
        printf("errno: %d\n", errno);
        perror("write");
        return -1;
    }
    printf("bytes written: %zd\n", bytes_written);
    close(fd);
    return 0;
}
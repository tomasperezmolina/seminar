#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

#define BUF_SIZE 240

int main(int argc, char const *argv[])
{
    int fd = open("3.input-output/2.1.txt", O_WRONLY);
    const char *str = "I wrote this\n";
    ssize_t bytes_written = write(fd, str, strlen(str));
    printf("bytes written: %zd\n", bytes_written);
    close(fd);
    return 0;
}

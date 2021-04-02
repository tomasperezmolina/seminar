#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

#define BUF_SIZE 240

int main(int argc, char const *argv[])
{
    int fd = open("3.input-output/3.1.txt", O_RDWR);
    char buf[BUF_SIZE];
    ssize_t bytes_read = read(fd, buf, BUF_SIZE - 1);
    printf("bytes read: %zd\n", bytes_read);
    buf[bytes_read] = '\0';
    printf("File contents:\n%s", buf);
    printf("Writing after the contents\n");
    const char *str = "I wrote this\n";
    ssize_t bytes_written = write(fd, str, strlen(str));
    printf("bytes written: %zd\n", bytes_written);
    close(fd);
    return 0;
}

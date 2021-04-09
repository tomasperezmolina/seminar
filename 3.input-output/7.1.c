#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char const *argv[])
{
    int fd = open("3.input-output/7.1.txt", O_RDONLY);
    if (fd == -1) {
        perror("open");
        exit(-1);
    }
    char buf_1[51];
    char buf_2[11];
    char buf_3[201];
    ssize_t bytes_read = read(fd, buf_1, 50);
    if (bytes_read == -1) {
        perror("read 1");
        exit(-1);
    }
    buf_1[bytes_read] = '\0';
    bytes_read = read(fd, buf_2, 10);
    if (bytes_read == -1) {
        perror("read 2");
        exit(-1);
    }
    buf_2[bytes_read] = '\0';
    bytes_read = read(fd, buf_3, 200);
    if (bytes_read == -1) {
        perror("read 3");
        exit(-1);
    }
    buf_3[bytes_read] = '\0';
    printf("buf 1: %s\n", buf_1);
    printf("buf 2: %s\n", buf_2);
    printf("buf 3: %s\n", buf_3);
    int res = close(fd);
    if (res == -1) {
        perror("close");
        exit(-1);
    }
    return 0;
}

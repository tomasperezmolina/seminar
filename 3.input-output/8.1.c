#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

void fill(char *buf, char c, size_t nmemb) {
    for(size_t i = 0; i < nmemb; i++) {
        buf[i] = c;
    }
}

int main(int argc, char const *argv[])
{
    int fd = open("3.input-output/8.1.txt", O_WRONLY);
    if (fd == -1) {
        perror("open");
        exit(-1);
    }
    char buf_1[50];
    fill(buf_1, 'A', 50);
    char buf_2[10];
    fill(buf_2, 'B', 10);
    char buf_3[200];
    fill(buf_3, 'C', 200);
    ssize_t bytes_written = write(fd, buf_1, 50);
    if (bytes_written == -1) {
        perror("write 1");
        exit(-1);
    }
    bytes_written = write(fd, buf_2, 10);
    if (bytes_written == -1) {
        perror("write 2");
        exit(-1);
    }
    bytes_written = write(fd, buf_3, 200);
    if (bytes_written == -1) {
        perror("write 3");
        exit(-1);
    }
    int res = close(fd);
    if (res == -1) {
        perror("close");
        exit(-1);
    }
    return 0;
}
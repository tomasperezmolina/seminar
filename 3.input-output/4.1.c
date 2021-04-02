#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

#define BUF_SIZE 240

int main(int argc, char const *argv[])
{
    int fd = open("3.input-output/4.1.txt", O_RDWR);
    off_t new_offset = lseek(fd, 0, SEEK_END);
    printf("New offset %ld\n", new_offset);
    const char *str = "12:09 Tantek: pressing return at 12:08\n";
    ssize_t bytes_written = write(fd, str, strlen(str));
    printf("bytes written: %zd\n", bytes_written);

    // Go back to start to read the contents
    new_offset = lseek(fd, 0, SEEK_SET);
    printf("New offset %ld\n", new_offset);
    printf("File contents:\n");
    char buf[BUF_SIZE];
    ssize_t bytes_read;
    do  {
        bytes_read = read(fd, buf, BUF_SIZE - 1);
        buf[bytes_read] = '\0';
        printf("%s", buf);
    } while(bytes_read == BUF_SIZE - 1);

    close(fd);
    return 0;
}
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

#define BUF_SIZE 240

int main(int argc, char const *argv[])
{
    char buf[BUF_SIZE];
    ssize_t bytes_read = read(STDIN_FILENO, buf, BUF_SIZE-1);
    write(STDOUT_FILENO, buf, bytes_read);
    const char *error = "This would be an error!\n";
    write(STDERR_FILENO, error, strlen(error));
    return 0;
}

// ./build/3.input-output > stdout.txt 2> stderr.txt

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *f = fopen("3.input-output/7.1.txt", "r");
    if (!f) {
        perror("fopen");
        exit(-1);
    }
    char buf_1[51];
    char buf_2[11];
    char buf_3[201];
    size_t bytes_read = fread(buf_1, sizeof(char), 50, f);
    if (ferror(f)) {
        perror("fread 1");
        exit(-1);
    }
    buf_1[50] = '\0';
    if (ferror(f)) {
        perror("fread 1");
        exit(-1);
    }
    bytes_read = fread(buf_2, sizeof(char), 10, f);
    buf_2[10] = '\0';
    if (ferror(f)) {
        perror("fread 1");
        exit(-1);
    }
    bytes_read = fread(buf_3, sizeof(char), 200, f);
    buf_3[200] = '\0';
    if (ferror(f)) {
        perror("fread 3");
        exit(-1);
    }
    printf("buf 1: %s\n", buf_1);
    printf("buf 2: %s\n", buf_2);
    printf("buf 3: %s\n", buf_3);
    int res = fclose(f);
    if (res) {
        perror("fclose");
        exit(-1);
    }
    return 0;
}

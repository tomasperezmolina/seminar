#include <stdio.h>
#include <stdlib.h>

void fill(char *buf, char c, size_t nmemb) {
    for(size_t i = 0; i < nmemb; i++) {
        buf[i] = c;
    }
}

int main(int argc, char const *argv[])
{
    FILE *f = fopen("3.input-output/9.1.txt", "w");
    if (!f) {
        perror("fopen");
        exit(-1);
    }
    char buf_1[50];
    fill(buf_1, 'A', 50);
    char buf_2[10];
    fill(buf_2, 'B', 10);
    char buf_3[200];
    fill(buf_3, 'C', 200);
    size_t chars_written = fwrite(buf_1, sizeof(char), 50, f);
    if (!chars_written && ferror(f)) {
        perror("fwrite 1");
        exit(-1);
    }
    chars_written = fwrite(buf_2, sizeof(char), 10, f);
    if (!chars_written && ferror(f)) {
        perror("fwrite 1");
        exit(-1);
    }
    chars_written = fwrite(buf_3, sizeof(char), 200, f);
    if (!chars_written && ferror(f)) {
        perror("fwrite 3");
        exit(-1);
    }
    abort(); // Terminate program unexpectedly
    return 0;
}
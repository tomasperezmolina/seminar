#include <stdio.h>

int main(int argc, char const *argv[])
{
    char word[] = {'d', 'u', 'c', 'k'}; // no need to specify size if we initialize the array.
    printf("word:         %p\n", word);
    printf("\n");
    printf("&word[0]:     %p\n", &word[0]);
    printf("&word[1]:     %p\n", &word[1]);
    printf("&word[2]:     %p\n", &word[2]);
    printf("&word[3]:     %p\n", &word[3]);

    return 0;
}

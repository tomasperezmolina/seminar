#include <stdio.h>

int main(int argc, char const *argv[])
{
    char word[] = {'d', 'u', 'c', 'k'};

    printf("*word:        %c\n", *word);
    printf("word[0]:      %c\n", word[0]);
    printf("\n");

    printf("word:         %p\n", word);
    printf("&word[0]:     %p\n", &word[0]);
    printf("\n");

    printf("word + 1:     %p\n", word + 1);
    printf("&word[1]:     %p\n", &word[1]);
    printf("\n");

    printf("word + 2:     %p\n", word + 2);
    printf("&word[2]:     %p\n", &word[2]);
    printf("\n");

    printf("*(word + 2):  %c\n", *(word + 2));
    printf("word[2]:      %c\n", word[2]);
    printf("\n");

    printf("entire word:  %c%c%c%c\n", *(word + 0), *(word + 1), *(word + 2), *(word + 3));
    printf("entire word:  %c%c%c%c\n", word[0], word[1], word[2], word[3]);

    return 0;
}

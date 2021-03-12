#include <stdio.h>

int main(int argc, char const *argv[])
{
    char word[4] = {'d', 'u', 'c', 'k'};
    printf("word[0]:     %c\n", word[0]);
    
    printf("entire word: %c%c%c%c\n", word[0], word[1], word[2], word[3]);
    word[3] = 't';
    printf("entire word: %c%c%c%c\n", word[0], word[1], word[2], word[3]);

    return 0;
}

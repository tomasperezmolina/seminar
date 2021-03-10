// Ignore this, needed for cross-compilation only
#if __x86_64__
#define SIZE_LIMIT_FORMAT "%lu"
#else
#define SIZE_LIMIT_FORMAT "%u"
#endif
// ------------------------------------------------

#include <stdio.h>
#include <stdint.h> 
#include <limits.h> 

// sudo apt-get install gcc-multilib

int main(int argc, char const *argv[])
{
    printf("UCHAR_MAX:      %u\n", UCHAR_MAX);
    printf("UCHAR_MIN:      %u\n", 0); // No min defined for unsigned as it is obviously 0.
    printf("CHAR_MAX:       %u\n", CHAR_MAX);
    printf("CHAR_MIN:       %d\n", CHAR_MIN);
    printf("\n");
    printf("UINT_MAX:       %u\n", UINT_MAX);
    printf("INT_MAX:        %u\n", INT_MAX);
    printf("INT_MIN:        %d\n", INT_MIN);
    printf("\n");
    printf("SIZE_MAX:       " SIZE_LIMIT_FORMAT "\n", SIZE_MAX);
    printf("SIZE_MAX in MB: " SIZE_LIMIT_FORMAT "\n", SIZE_MAX / (1024 * 1024));
    printf("SIZE_MAX in GB: " SIZE_LIMIT_FORMAT "\n", ((SIZE_MAX / 1024) + 1024) / (1024 * 1024)); // Account for zero

    return 0;
}

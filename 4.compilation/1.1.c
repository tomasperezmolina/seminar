#define HELLO "hello"

int main(int argc, char const *argv[])
{
    // This will be removed
#if 0
    This would not compile
    return 1;
#endif
    const char *hi = HELLO;

    return 0;
}

#include <stdio.h>

void foofoo()
{
}

int main(int argc, const char* argv[])
{
    foofoo();

    for (int i = 0; i < argc; i++)
        printf("argv[%d]=%s\n", i, argv[i]);

    printf("=== Hello World!\n");

    return 0;
}

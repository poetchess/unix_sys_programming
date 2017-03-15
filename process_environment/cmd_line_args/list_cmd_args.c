#include "apue.h"

int main(int argc, char *argv[])
{
    int i;

    //Both ISO C and POSIX.1 specify that argv[argc] is a null pointer,
    //so it is similar to: for (int i = 0; argv[i] != NULL; i++)

    //argv[i] is a null-terminated string.

    for (int i = 0; i < argc; i++)
    {
        printf("argv[%d]: %s\n", i, argv[i]);
    }
    exit(0);
}

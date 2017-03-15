#include "apue.h"

extern char **environ;

int main(int argc, char *argv[])
{

    char **penv = environ;
    printf("Environment list:\n");
    while ((*penv))
    {
        printf("%s\n", *penv);
        penv++;
    }
    exit(0);
}

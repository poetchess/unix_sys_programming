#include "apue.h"

static void my_exit1(void);
static void my_exit2(void);

int main(void)
{
    //The exit function calls these functions in reverse order of their
    //registration. Each function is called as many times as it was registered.

    //With ISO C and POSIX.1, exit first calls the exit handlers and then 
    //closes (via fclose) all open streams.
    //POSIX.1 extends the ISO C standard by specifying that any exit handlers 
    //installed will be cleared if the program calls any of the exec family of
    //functions.

    if (atexit(my_exit2) != 0)
        err_sys("can’t register my_exit2");
    if (atexit(my_exit1) != 0)
        err_sys("can’t register my_exit1");
    if (atexit(my_exit1) != 0)
        err_sys("can’t register my_exit1");
    printf("main is done\n");
    return(0);
}

static void my_exit1(void)
{
    printf("first exit handler\n");
}

static void my_exit2(void)
{
    printf("second exit handler\n");
}

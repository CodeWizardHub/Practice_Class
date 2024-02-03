#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main ()
{
    pid_t pid;
    printf("This is the first TU\n");
    execl("./tu2", "./tu2", "Hello from T1", NULL);
}

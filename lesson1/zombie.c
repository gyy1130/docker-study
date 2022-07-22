#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    pid_t child_pid;

    for (int i = 0; i < 1000; i++)
    {
        child_pid = fork();
        if (child_pid == 0)
        {
            exit(0);
        }
    }
    return 0;
}

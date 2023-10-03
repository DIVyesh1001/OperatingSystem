#include <stdio.h>
// #include <unistd.h>
int main()
{
    int id = fork();

    if (id > 0)
    {
        sleep(5);
        printf("Parent process\n");
        printf("Parent process Id: %d\n", getpid());
    }
    else
    {
        printf("Zombie process\n");
        printf("Child process id: %d\n", getpid());
        printf("Parent process id: %d\n", getppid());
    }
    return 0;
}

//Orphan Process
main()
{
    int id = fork();
    if (id > 0)
    {
        printf("Parent process id: %d\n", getpid());
    }
    else
    {
        sleep(5);
        printf("\nOrphan process\n");
        printf("Child process id: %d\n", getpid());
        printf("Parent process id: %d\n", getppid());
    }
    return 0;
}

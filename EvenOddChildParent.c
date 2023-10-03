#include <stdio.h>
#include <sys/types.h> 
// #include <unistd.h>

int main()
{
    int id = fork();
    int store[8] = {8, 7, 6, 5, 4, 3, 2, 1};
    int tot1 = 0;
    int tot2 = 0;
    if (id > 0)
    {
        for (int i = 0; i < 8; i++)
        {
            if (store[i] % 2 != 0)
                tot1 = tot1 + store[i];
        }
        printf("Odd \n");
        printf("%d \n", tot1);
        printf("Parent Id %d \n", getpid());
    }

    else if (id == 0)
    {
        for (int i = 0; i < 8; i++)
        {
            if(store[i] % 2 == 0)
                tot2 = tot2 + store[i];
        }
        printf("Even \n");
        printf("%d \n", tot2);

        printf("Child Id %d \n", getpid());
    }
    return 0;
}

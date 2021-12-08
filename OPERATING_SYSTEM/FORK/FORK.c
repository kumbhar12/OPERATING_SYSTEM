#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    pid_t id;
    printf("befr fork\n");
    id=fork();
    printf("after fork\n");

    if(id==0)
    {
        printf("child\n");
        printf("%d\tppid\t%d\tpid\n",getppid(), getpid() );
    }
    else
    {
        printf("parant\n");
        printf("%d\tppid\t%d\tpid\t%d\tid\n",getppid(), getpid(), id ); 
    }
    return 0;
}
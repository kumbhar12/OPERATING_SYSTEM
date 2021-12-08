#include <stdio.h>
#include <unistd.h>


int main(int argc, char const *argv[]){
    pid_t id;

    id = fork();
    if(0 == id)
    {
        //Child
        printf("Child started\n");
        sleep(2);
        printf("Child exited\n");
        printf("PID : %d\nPPID : %d\n",getpid(), getppid());
        printf("\n");
    }
    else
    {    
        printf("Parent started\n");
        sleep(6);
        printf("Parent exited\n");
        printf("PID : %d\nPPID : %d\n",getpid(), getppid());
    }

    return 0;
}
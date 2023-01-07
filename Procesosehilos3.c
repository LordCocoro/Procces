#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    int num;
    pid_t nuevo;

    for(num=0;num<2;num++)
    {
        nuevo=fork();
        if(num==0)
            break;

    }

    nuevo=fork();
    nuevo=fork();
    printf("Soy el proceso %d y mi padre es %d \n",getpid(),getppid());
    return 0;
}

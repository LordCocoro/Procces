#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    int num;
    pid_t nuevo;


    int n=3;

    for(num=0;num<n;num++)
    {
        nuevo=fork();
        if((num==n)&&(nuevo==0))
          execlp("ls","ls","-l",NULL);

    }

    printf("Soy el proceso %d y mi padre es %d \n",getpid(),getppid());
    return 0;
}

#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
    pid_t pid=fork();
    if(pid=-1)
    {
        printf(stderr,"Could not fork process..!\n");
    }
    if(pid=0)
    {
        printf("I am child process.!");
    }
    else
    {
        printf("I am parent process..!\n");
        printf("parent process ID:%d\n",getppid());
        printf("Child process Id:%d\n",getpid());
    }
}
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
void main()
{
int pid;
printf("%d \n ",pid);
if(pid<0)
{
perror("child process cant be executed");
exit(1);
}
else
{
printf("child process created \n ");
exit(0);
}
}



#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <stdio.h>
 void main(){
  pid_t childid=fork();
  
   if(childid ==0){
   printf(" I am child and child creation is successfull ");
   printf("  childid is %d\n",getpid());
   printf("i am parent and parentid is %d\n",getppid());
     }
     
   if(childid >0)
   {
   printf("parent and child is successfully created");
   printf("parent process id is %d\n",getppid());
   printf("child id is %d\n",childid);
   
   wait(NULL);
   printf("parent is in  waiting state amd child process is runnning ");
   }
   
   if(childid<0){
   printf("in fork():child creation is failed");
   }
   exit(0);
      }

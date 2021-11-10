#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
int main(void){
  int pid,status;
  pid = fork();
  if(pid==0){
  int n = 9; 
   for(int i=1;i<=10;i++){
     printf("%d*%d = %d\n",n,i,n*i);
  }
 }
 else{ 
   wait(&status);
   printf("In the parent Process:/n My name is Shahzaib Hassan and CNIC no. is 36502-2329380-9\n");
 }
 return 0;
}

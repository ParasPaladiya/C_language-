#include<stdio.h>
  int main(){
    int n,fd=0,sd=1,sum;
    printf("Enter Any number:");
    scanf("%d",&n);
    while(fd<=n){
      printf("%d ",fd);
      sum=fd+sd;
      fd=sd;
      sd=sum;
    } 
    
  }

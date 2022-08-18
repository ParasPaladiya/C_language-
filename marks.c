#include<stdio.h>
 int main(){
   int act,guj,english,stat,ba,eco,sum=0,roll_number;
   char a;
      
   printf("Enter student name :\n");
   scanf("%c",&a);
   
    printf("Enter the roll number:\n");
    scanf("%d",&roll_number);
   

   
   printf("Enter act marks:\n");
   scanf("%d",&act);
   
   printf("Enter guj marks:\n");
   scanf("%d",&guj);
   
   printf("Enter english marks:\n");
   scanf("%d",&english);
   
   printf("Enter stat marks:\n");
   scanf("%d",&stat);
   
   printf("Enter ba marks:\n");
   scanf("%d",&ba);
   
   printf("Enter eco marks:\n");
   scanf("%d",&eco);
   
   sum=act+guj+english+stat+ba+eco;
   
   printf("total:%d",sum);
   
   return 0;
 }

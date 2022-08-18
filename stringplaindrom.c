#include<stdio.h>
#include<string.h>
 int main(){
   char name[100],name2[100];
   
   printf("enter string:");
   gets(name);
    
   strcpy(name2,name);
   strrev(name2);
   
   if(!strcmp(name,name2)){
     printf("string is palindrome ");
   }else{
     printf("string is not palindrome");
   }
 }

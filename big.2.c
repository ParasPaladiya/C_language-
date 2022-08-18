#include<stdio.h>

 int main(){
   int a,b,c,d;
   
   printf("Enter value A:");
   scanf("%d",&a);
   printf("Enter value B:");
   scanf("%d",&b);
   printf("Enter value C:");
   scanf("%d",&c);
   printf("Enter value D:");
   scanf("%d",&d);
   
   
if(a>b){
  if(a>c){
  
    printf("A id big");
  }else{
    printf("C is big");
  }
    
    if(c>d){
      printf("C is big");
    }  else{
      printf("d is big");
    }
  if(a>d){
      printf("A is big");
    }else{
      printf("D is big");
    }
  
  
}else{
  if(b>c){
  
    printf("B is big");
  }else{
    printf("c is big");
    
  }
    if(b>d){
      
      printf("B is big2");
      
    }else{
      printf("D is big2");
    }
  if(c>d){
        printf("C is big2");
        
      }else{
        printf("D is big3");
      }
  
  
  
}
 }

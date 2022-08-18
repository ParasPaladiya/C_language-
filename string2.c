#include<stdio.h>
#include<string.h>

 int main(){
    char name[20],name2[20];
    int i,size,size2;
    
    gets(name);
    gets(name2);
    
    strcpy(name2,name);
    printf("name :%s\n",name2);
    
    if(strcmp(name,name2)==0){
      printf("string is equle:\n");
    }else{
      printf("string is not equle:\n");
    }
    
    size=strlen(name);
    printf("size=%d\n",size);
    size=strupr(name);
    size2=strlwr(name2);
    printf("name :%s\n",size); 
    printf("name2 :%s\n",size2);
                                      
    strcat(name,name2);
    printf("name:%s\n",name);
    printf("name2:%s\n",name2);
    strrev(name);
    printf("name:%s\n",name);
    printf("name2:%s\n",name2);
 }   

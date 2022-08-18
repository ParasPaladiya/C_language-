#include<stdio.h>

int strlen(char str[30]){
	int i, len=0;
	for(i=0; i<str[i]!='\0'; i++){
		len ++;
	}
	return (len);
}

int strlen(char str[30]);
int main (){
	char str[30];
	int i,len;
	
	printf("enter string :\n");
	gets(str);
	
	len = strlen(str);
	printf("length of string is %d",len);
	
	return 0;
} 

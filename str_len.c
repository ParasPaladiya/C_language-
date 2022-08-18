#include<stdio.h>

int strlenght(char name[50]){
	
	int i; 
	for(i=0; name[i]!='\0'; i++){
		
	}
	return i;
}
main (){
	
	char n[50];
	int size;
	gets(n);
	
	size = strlenght(n);
	
	printf("size = %d",size);
}

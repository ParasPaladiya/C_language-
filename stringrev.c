#include<stdio.h>

int main (){
	
	char name[10],rev[10];
	int i,size,j;
	gets (name);
	
	for(i=0; name[i]!='\0'; i++){
		rev[i]= name[i];
	}
	size =i;
	for(i=size-1, j=0; i>=0, j<size; i--,j++){
		rev[j]=name[i];
	}
	printf("string rev= ");
	puts(rev);
}

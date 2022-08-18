#include<stdio.h>
#include<string.h>

int main (){
	
	char string1[20];
	int i,lenght;
	int flag=0;
	
	printf("enter a string :");
	scanf("%s",string1);

	lenght = strlen(string1);
	
	for(i=0; i<lenght; i++){
		if(string1[i] != string1[lenght-i-1]){
		flag = 1;
		break;
		}
	}
	
	if(flag){
		printf("%s is plaindrom :",string1);
	}else{
		printf("%s is not plaindrom :",string1);
	} 
	return 0;	
}

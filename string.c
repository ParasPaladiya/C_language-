#include<stdio.h>

int main (){
	
	char name[26];
	int i,size;
	gets (name);
	
	for(i=0; name[i]!=NULL; i++){
		if(name[i]>='a' && name[i]<='z'){
			name[i] -=32;
		}else if(name[i]>='A' && name[i]<='Z'){
			name[i] +=32;
		}
	}
	printf("name : %s",name);
}


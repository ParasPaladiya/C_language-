#include<stdio.h>

int fact(int i){
	if(i==0){
		return 1;
	}else{
		return i*fact(i-1);
	}
}
main (){
	
	int f,n;
	printf("enter number :");
	scanf("%d",&n);
	f =fact(n);
	printf("fact = %d",f);
}

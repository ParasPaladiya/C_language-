#include<stdio.h>

int sum(int a, int b){
	int c;
	c = a+b;
	return c;
}
main (){
	
	int a,b,s;
	printf("enter value :");
	scanf("%d",&a);
	printf("enter vaule :");
	scanf("%d",&b);
	s = sum(a,b);
	printf("sum = %d",s);
}

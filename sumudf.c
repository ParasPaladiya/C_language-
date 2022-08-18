#include<stdio.h>

int sum(int a[10], int n){
	int i,sum=0;
	for(i=0; i<n ; i++){
		sum += a[i];
	}
	return sum;
}
main (){
	int a[10];
	int i,n,s;
	printf("enter array size :");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("enter value :");
		scanf("%d",&a[i]);
	}
	s = sum(a,n);
	printf("sum of array %d",s); 
}

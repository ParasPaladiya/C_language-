#include<stdio.h>

main (){
	
	int i,j,no=0;
	
	for(i=1; i<=5; i++) {
		for (j=1; j<=i; j++) {
			no++;
			printf(" %d",no);
		}
		printf("\n");
	}
}

#include<stdio.h>

main (){
	
	int i,j,k=4,h=4;
	
	for(i=1; i<=4; i++) {
		for(j=1; j<=7; j++) {
			if(k==j || h==j) {
				printf(" *");
			}else{
				printf("  ");
			}
		}
		k++;
		h--;
		printf("\n");
	}
}

#include<stdio.h>

main () {
	
	int i,j,k,h;
	
	for (i=5; i>=1; i--) {
		for(j=1; j<=i; j++){
		    printf("  ");
    	}
	    for (k=5; k>i; k--) {
		    printf(" %d",k);
	    }
	    for(h=i; h<=5; h++) {
		    printf(" %d",h);
	    }
    	printf("\n");
    }
}

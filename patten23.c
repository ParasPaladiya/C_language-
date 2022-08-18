#include<stdio.h>

main () {
	
	int i,j;
	
	for (i=5; i>1; i--) {
		for(j=1; j<=i; j++){
		    printf(" %d",j);
    	}
	    for (j=4; j>=i; j--) {
		    printf("    ");
	    }
	    for(j=i; j>=1; j--) {
		    printf(" %d",j);
	    }
    	printf("\n");
    }
    
	for (i=1; i<=5; i++) {
		for(j=1; j<=i; j++){
		    printf(" %d",j);
    	}
	    for (j=4; j>=i; j--) {
		    printf("    ");
	    }
	    for(j=i; j>=1; j--) {
		    printf(" %d",j);
	    }
    	printf("\n");
    }
}


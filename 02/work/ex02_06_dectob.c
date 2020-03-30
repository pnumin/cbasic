#include <stdio.h>
int decTobinary(int b[], int n) {
	int i;
	for(i=0; n > 1 ; i++) {
    	b[i] = n % 2;
    	n = n / 2 ;
	}
	
	if (n != 0) b[i] = 1;
	else b[i] = 0;
	
	return i;
}


int main()
{
    int b[255] , n ;
    int i, size ;
    
    scanf("%d", &n) ;
       
	size = decTobinary(b, n) ;
	for(i=size; i>=0; i--) printf("%d", b[i]) ;
    return 0; 
}

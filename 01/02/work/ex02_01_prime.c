/*
소수 구하기 
*/
#include <stdio.h>

int prime(int n) {
	int i, cnt=0 ;
	
	for(i=1; i<=n ; i++) {
		if ( n % i == 0) cnt++;
	}
	
	if (cnt == 2) return 1;
	return 0;
}

int main(){
	int n ;
	scanf("%d", &n);
	
	if(prime(n)) printf("prime");
	else printf("composite");
	return 0;
}
 

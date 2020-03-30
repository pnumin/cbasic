#include <stdio.h>

int sumAll(int n, int check) {
	int sum = 0 ;
	int i ;

	for(i=1 ; i<= n; i++) {
		if (check == 0 || check == 1) {
			if ( i % 2 == check) sum = sum + i ;
		}
		else {
			sum = sum + i;
		}
	}
	
	return sum;
}

int main() {
	int n ;
	
	scanf("%d", &n);
	
	printf("%d까지 전체합 : %d\n", n,sumAll(n, 2)) ;
	printf("%d까지 짝수합 : %d\n", n,sumAll(n, 0)) ;
	printf("%d까지 홀수합 : %d\n", n,sumAll(n, 1)) ;
}

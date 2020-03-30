/*
두수 교환하기  
*/
#include <stdio.h>

void swap(int* x, int* y) { 
	int temp ;
	
	temp = *x;
	*x = *y;
	*y = temp ;
	
}

int main(){
	int a, b ;
	scanf("%d %d", &a, &b);
	
	printf("a=%d, b=%d\n", a, b);
	swap(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return 0;
}
 

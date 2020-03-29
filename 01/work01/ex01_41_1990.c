/*
1990 : 3의 배수 판별하기
자연수 n이 입력되면 3의 배수인지 아닌지 판별하시오.
*/
#include <stdio.h>

int main() {
	char num[501];
	int i, sum=0, n;
	
	gets(num) ;
	
	i=0;
	while(num[i] != '\0') {
		n = num[i] - '0' ; 
		sum = sum + n; 
		i++;
	}
	
	if (sum % 3 == 0) printf("1") ;
	else  printf("0") ;
}

/*
1416 : 2진수 변환
어떤 10진수 n이 주어지면 2진수로 변환해서 출력하시오.

예)

10    ----->  1010
0    ----->  0
1    ----->  1
2    ----->  10
1024    ----->  10000000000
*/
#include <stdio.h>
int main()
{
    int b[255] , n ;
    int i, size ;
    
    scanf("%d", &n) ;
    
    for(i=0; n > 1 ; i++) {
    	b[i] = n % 2;
    	n = n / 2 ;
	}
	
	if (n != 0) b[i] = 1;
	else b[i] = 0;
	size = i ;
	
	for(i=size; i>=0; i--) printf("%d", b[i]) ;
	
	
    return 0; 
}

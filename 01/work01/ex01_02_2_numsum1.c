/*
양의 정수를 입력 받아서 각 자리의 합을 구하시오.
*/
#include <stdio.h>
 
int main() {
    int n, n1, n2, n3, i, sum = 0;

    printf("자연수 입력 : ");
    scanf("%d", &n); 

	n1 = n / 100 ;
	n2 = n % 100 /10 ;
	n3 = n2 % 10 ;     

	sum = n1 + n2 + n3 ;
    printf("합계 : %d\n", sum) ;
    return 0;
}

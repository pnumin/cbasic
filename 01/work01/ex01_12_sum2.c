/*
자연수 2개를 입력 받아서 두 수 사이의 합계를 구하시오.
*/
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int cnt ;

    printf("1보다 큰 자연수 입력 : ");
    scanf("%d", &n);

    cnt = ( n - 1 ) + 1 ;

    sum = ( 1 + n ) * ( cnt / 2) ;
    if (cnt % 2 == 1 ) {
        sum = sum + (( cnt / 2) + 1) ;
    }
    
    printf("합계 : %d\n", sum) ;
    return 0;
}

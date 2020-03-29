/*
자연수 2개를 입력 받아서 두 수 사이의 합계를 구하시오.
*/
#include <stdio.h>

int main() {
    int n, i, sum = 0;


    printf("1보다 큰 자연수 입력 : ");
    scanf("%d", &n);

    for (i=1; i<=n ; i++) {
        sum = sum + i;
    }

    printf("합계 : %d\n", sum) ;
    return 0;
}

/*
1378 : 수열의 합동렬이는 수학 문제를 풀다 다음과 같은 수열을 보았다.

Sn=(1)+(1+2)+(1+2+3)+(1+2+3+4)+...+(1+...+n)
임의의 정수 n이 주어질 때 이 수열의 합 Sn을 구하는 프로그램을 작성하시오.
*/
#include <stdio.h>

int main() {
    int n, i, j, sum = 0;

    scanf("%d", &n);


    for (i=1; i<=n ; i++) {
        for (j=1; j<=i; j++) {
        	sum = sum + j;
		}
    }

    printf("%d", sum) ;
    return 0;
}


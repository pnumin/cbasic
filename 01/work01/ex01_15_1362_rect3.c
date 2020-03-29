/*
1365 : 사각형 출력하기 3
역시 별로 사각형을 출력하는 문제이다.
하지만 여기서는 대각선을 출력해야한다.
프로그램은 다음과 같이 진행된다.

1. n이 입력된다.(3<=n<=100)
2.대각선이 포함된 n*n사각형을 출력한다.
*/

#include <stdio.h>

int main() {
    int n, i, j, mid;
    
    scanf("%d", &n);
    
    for(i=1; i<=n; i++) {
    	for (j=1; j<=n; j++) {
            if ( i == 1 || i == n || j == 1 || j == n || i == j || j == n-i+1) 
            	printf("*");
            else 
            	printf(" ");
        }
        printf("\n");
    }
    
    
    return 0;
}

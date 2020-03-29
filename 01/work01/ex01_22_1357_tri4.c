/*
1357 : 삼각형 출력하기 4
n이 입력되면 다음 삼각형을 출력하시오.

예) n = 4

*
**
***
****
***
**
*
*/
#include <stdio.h>

int main() {
    int n, i, j;
    
    scanf("%d", &n);
    
    for(i=1; i<=n; i++) {
        for (j=1; j<=i; j++) {
            printf("*"); 
        }
        printf("\n");
    }
    
    for(i=n-1; i>=1; i--) {
        for (j=1; j<=i; j++) {
            printf("*"); 
        }
        printf("\n");
    }
    
    return 0;
}


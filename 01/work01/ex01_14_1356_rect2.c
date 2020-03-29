/*
1352 : 사각형 출력하기 2
길이 n이 입력되면 길이가 n인 사각형을 출력하시오.
단, 사각형 테두리만  * 모양으로 채운다.
*/

#include <stdio.h>

int main() {
    int n, i, j;
    
    scanf("%d", &n);
    
    for(i=1; i<=n; i++) {
        for (j=1; j<=n; j++) {
            if ( i==1 || i==n || j==1|| j==n) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}

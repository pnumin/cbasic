/*
1367 : 평행사변형 출력하기 1
평행사변형의 높이 n이 주어진다.
옆 면이 대각선으로 이루어지는 평행사변형을 출력한다.
단,공백은 왼쪽 위에 있다.

*/
#include <stdio.h>

int main() {
    int n, i, j, mid;
    
    scanf("%d", &n);
    
    for(i=1; i<=n; i++) {
    	for (j=1; j<=n-i; j++) printf(" ");
    	for (j=1; j<=n; j++) {
            printf("*"); 
        }
        printf("\n");
    }
    return 0;
}


/*
1355 : 삼각형 출력하기 3 
길이 n이 입력되면 다음과 같은 역삼각형을 출력한다.

예)
n이 5이면

*****
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
    	for (j=1; j<i; j++) {
    		printf(" ");
		}
        for (j=i; j<=n; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}

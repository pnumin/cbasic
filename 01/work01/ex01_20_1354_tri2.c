/*
1354 : 삼각형 출력하기 2
길이 n이 입력되면 역삼각형을 출력한다.

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
    
    /*
    for( i = n ; i >= 1 ; i-- )
	{
		for( j = 1 ; j <= i ; j++ )
			printf( "*" );
		printf("\n");	
	}
    */
    
    for(i=1; i<=n; i++) {
        for (j=1; j<=n-i+1; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}


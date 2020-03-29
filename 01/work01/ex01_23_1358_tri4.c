/*
1358 : 삼각형 출력하기 5
어떤 수 n을 입력받으면 다음과 같은 삼각형을 출력한다.

여기서 입력되는 n은 반드시 홀수이다.
*/
#include <stdio.h>

int main() {
    int n, i, j, mid;
    
    scanf("%d", &n);
    
	/*
	for(i = 0 ;i<n/2+1;i++)
	{
		for( j = 0 ; j < n / 2 - i ; j++ )
			printf( " " );
		for( j = 0 ; j < i * 2 + 1 ; j++ )
			printf( "*" );
		printf( "\n" );
	}
	*/
	
	mid = n / 2 ;
    
    for(i=1; i<=n/2+1; i++) {
    	for (j=1; j<=mid-i+1; j++) {
            printf(" "); 
        }
        for (j=1; j<=2*i-1; j++) {
            printf("*"); 
        }
        printf("\n");
    }
    
    
    return 0;
}



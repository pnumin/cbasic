/*
1677 : 종이 만들기
n*m 종이를 만들려고 한다.

가로 길이와 세로 길이가 주어지면 다음과 같은 종이를 출력하시오.

예를 들어) 4 * 3의 종이라면
+--+
|  |
+--+
이와 같이 출력한다.
*/
#include <stdio.h>#include <stdio.h>

int main() {
    int n, m, i, j; 

	scanf("%d %d", &n, &m) ;
    for (i=1; i<=m ; i++) {
        for (j=1; j<=n; j++) {
        	if((j==1 && i==1) || (j==1 && i==m) || (j==n && i==1)|| (j==n && i==m))  printf("+");
        	else if (i==1 || i == m) printf("-");
        	else if (j==1 || j == n) printf("|");
        	else printf(" ");
		}
		printf("\n");
    }
 
    return 0;
}


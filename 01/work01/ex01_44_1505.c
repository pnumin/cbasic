/*
1505 : 2차원 배열 채우기 3(달팽이 배열)
 n이 입력되면 크기가 n인 다음과 같은 2차원 배열을 출력하시오.

입력 예)
3
출력 예)
1 2 3
8 9 4
7 6 5
*/
#include <stdio.h>

int main() {
	int arr[50][50];
	int n, inc=1, i=0, j=0, k=0 ;
	int row=0, col=-1, cnt=0 ;
	
	scanf("%d", &n);
	cnt=n;
	
	while(k!= n*n) {
		for(i=0; i < cnt; i++ ) {
			col = col + inc;
			arr[row][col] = ++k; 
		}
		 
		cnt--;   
		for(i=0; i < cnt; i++ ) {
			row = row + inc;
			arr[row][col] = ++k; 
			
		}
		inc = inc * -1; 
	}
	
	for(i=0; i<n; i++) {
		for(j=0; j<n ; j++) {
			printf("%d ", arr[i][j]) ;
		}
		printf("\n");
	}
	return 0;
}


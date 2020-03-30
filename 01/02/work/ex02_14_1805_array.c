/*
1805 : 입체기동장치 생산공장
*/
#include <stdio.h>

int arr[101];

int main()
{
	int n, i, a, b;

	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d%d", &a, &b);
		//입력된 값이 0일 경우 기존의 값과 구분하기 위해서 사용  
		arr[a] = b + 1 ;
	}

	for(i = 1; i <= 100; i++) 
		if ( arr[i] ) 
			printf("%d %d\n", i, arr[i] - 1);
	return 0;
}

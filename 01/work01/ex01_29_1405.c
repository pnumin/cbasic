/*
1402 : 거꾸로 출력하기 3
이번에는 데이터의 개수가 n개가 들어오고, n개의 데이터를 거꾸로 출력하는 프로그램을 작성하시오.
*/
#include <stdio.h>
int main()
{
    int a[1000], i, n;		

	scanf("%d", &n);
	 
	for(i=0; i<n; i++) {
		scanf("%d", &a[i]);
	} 
	 
	for(i=n-1; i>=0; i--) {
		printf("%d ", a[i]);
	} 
    return 0; 
}


/*
세 정수를 입력 받아서 최대값을 구하시오.
*/
#include <stdio.h>
int main() {
	int a, b, c ;
	int max ;
	
	printf("3수의 최대값을 구합니다. 세수를 입력하세요.");
	scanf("%d%d%d", &a,&b,&c) ;
	
	max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	
	printf("최대값 : %d\n", max);
	return 0;
}

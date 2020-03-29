/*
세 정수를 입력 받아서 중앙값을 구하시오.
*/
#include <stdio.h>

int main() {
	int a, b, c, midNum ;
	printf("3수의 중간값을 구합니다. 세수를 입력하세요.");
	scanf("%d%d%d", &a,&b,&c) ;
	
	if (a >= b) {
		if ( b >= c) {
			midNum = b;
		}
		else if ( c >= a) {
			midNum = a;
		}
		else {값 
			midNum = c;
		}
	}
	else {
		if ( a > c) {
			midNum = a;
		}
		else if ( c > b) {
			midNum = b;
		}
		else {
			midNum = c;
		}
	} 
	
	printf("중간값 : %d\n", midNum);
	 
	return 0;
}

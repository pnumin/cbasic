/*
1161 : 홀수와 짝수 그리고 더하기
정수 두개가 입력으로 들어온다.
만약 첫번째 정수가 홀수이면 "홀수"를 출력하고, 짝수이면 "짝수"를 출력한 후  "+"를 출력한다.
그리고 두번째 정수가 홀수이면 "홀수"를 출력하고, 짝수이면 "짝수"를 출력한 후  "="을 출력하고 결과로 나오는 값이 홀수인지 짝수인지 출력한다.
*/
#include <stdio.h>
void oddeven(int x) {
	//선택  
	if (x % 2 == 0) printf("짝수");
	else printf("홀수") ;
} 
 

int main() {
    int n, m; 

	scanf("%d %d", &n, &m) ;
    
    //순서  
	oddeven(n);
	printf("+");
	oddeven(m);
	printf("=");
 	oddeven(n+m);
    return 0;
}

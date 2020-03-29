/*
3129 : 올바른 괄호 2
여는 괄호와 닫는 괄호의 개수만으로는 올바른 괄호 문자열을 판단할 수 없다.

예를 들어, )()( 이런 문자열도 개수는 같지만 올바른 괄호 문자열이 아니다.
어떤 괄호 문자열이 주어지면 올바른 괄호 문자열인지 판단하시오.
*/
#include <stdio.h>
#include <string.h>

int main() { 
	int n,i, cnt=0;
	char str[50001];
	
	scanf("%s", &str) ; 
	n = strlen(str);
	for(i=0; i< n; i++) {
		if (cnt < 0 ) break;
		if (str[i] == '(') cnt++;
		else if (str[i] == ')') cnt--;
	}
	
	if (cnt == 0) printf("good") ;
	else printf("bad") ;
}

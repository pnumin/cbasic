/*
1407 : 문자열 출력하기 1
길이(글자수)가 100이하인 문자열을 입력받아 공백을 제거하고 출력하시오.
*/
#include <stdio.h>
int main()
{
    char a[100];
	int i;		

	gets(a); 
	for(i=0; a[i] != '\0'; i++) {
		if ( a[i] == ' ') continue; 
		printf("%c", a[i]);
	} 
	 
    return 0; 
}


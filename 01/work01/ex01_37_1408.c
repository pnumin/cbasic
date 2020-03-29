/*
1408 : 암호 처리
인터넷 서비스들은 대부분 아이디와 패스워드(password)를 이용한다.
이때 사용되는 패스워드는 여러 가지 방법으로 암호화되어 저장된다.

[어떤 인터넷 서비스의 2가지 암호화 방법]
- 입력받은 문자의 ASCII 코드값 + 2
- (입력받은 문자의 ASCII 코드값 * 7) % 80 + 48
사용자의 패스워드를 2가지 방법으로 암호화한 결과를 출력하는 프로그램을 작성하시오.
*/
#include <stdio.h>

int main() {
	char str[21];
	char strp1[21], strp2[21];
	int i;
	
	gets(str);
	i=0;
	while(str[i] != '\0') {
		strp1[i] = str[i] + 2 ;
		strp2[i] = (str[i] * 7) % 80 + 48 ;
		i++;
	}
	strp1[i] = '\0';
	strp2[i] = '\0';
	
	printf("%s\n%s", strp1, strp2);
	
}



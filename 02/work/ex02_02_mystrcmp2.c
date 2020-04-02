#include <stdio.h>

int mystrcmp(char* str1, char* str2)  {
	int i = 0 ;
	
	while(*(str1+i) == *(str2+i) ) {
		if (*(str1+i) == '\0' && *(str2+i) == '\0') return 1 ;
		i++;
	}
	
	return 0 ;
}

int main() {
	char str1[255] , str2[255] ;
	
	
	gets(str1);
	gets(str2);
	
	if ( mystrcmp(str1, str2) ) printf("같음");
	else printf("다름");
	return 0;
}

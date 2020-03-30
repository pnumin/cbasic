#include <stdio.h>
#include <string.h>

int csvSplit(char* str, int len) {
	static int i;
  	int num =0;
	
	if (*(str+i) == '\0') return -1 ;
	
	while(*(str+i) >= '0' && *(str+i) <= '9') {
		num = num * 10 + (*(str+i) - '0') ;
		i++;
	}
	
	if (*(str+i) == ',') i++ ; 
	return num;
}

int main() {
	char str[] = "123,456,789";
	int num, sum = 0, len;
	
 	len = strlen(str); 
	
	while((num = csvSplit(str, len)) > 0 )  { 
		printf("%d + %d ", num, sum);
		sum = sum + num ;
		printf("= %d\n", sum); 
	} 
	
	return 0;
}

#include <stdio.h>
#include <string.h>
int i;
int csvSplit(char* str, int len) {
  	int num =0;
	
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
	
	while(i < len) {
		num = csvSplit(str, len) ;
		printf("%d + %d ", num, sum);
		sum = sum + num ;
		printf("= %d\n", sum); 
	} 
	
	return 0;
}

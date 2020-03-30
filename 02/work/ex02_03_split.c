#include <stdio.h>
#include <string.h>

void csvSplit(char str[], int len) {
	int i;
  	int num =0;
  	
  	for(i=0; i<len; i++) {
  		if (str[i] == ',') {
  			printf("%d\n", num);
  			num = 0 ;
			continue ;	
		}	
		num = num * 10 + (str[i] - '0') ;
	}
	printf("%d\n", num);
}

int main() {
	char str[] = "123,456,789";
	int num, i, len;
	
 	len = strlen(str); 
	csvSplit(str, len); 
	
	return 0;
}

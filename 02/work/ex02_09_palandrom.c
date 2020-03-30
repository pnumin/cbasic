#include <stdio.h>
#include <string.h>

int ispalandrom(char* mystr1) {
	int len = 0, i ;
	int flag = 1 ;
	len = strlen(mystr1)  ;
	
	for(i=0 ; i< len / 2 ; i++) {
		if ( *(mystr1+i) != *(mystr1+len-1-i)) {
			flag = 0;	
			break;
		}
	}
	
	return flag ;
}

int main() {
	char mystr1[256];
	char mystr2[256]; 

	gets(mystr1); 
	
	if (ispalandrom(mystr1)) {
		printf("회문\n");
	}
	else {
		printf("비회문\n");
	} 
	
	return 0;
}

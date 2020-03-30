#include <stdio.h>
#include <string.h>

void backward(char* mystr1, char* mystr2, int len) {
	int i, j=0 ;
	
	for(i=len-1; i>=0; i--) {
		*(mystr2+j) = *(mystr1+i); 
		j++;
	}
	
	*(mystr2+j) = '\0'; 
}

int main() {
	char mystr1[256];
	char mystr2[256]; 
	int len;

	gets(mystr1); 
	
	len = strlen(mystr1);
	backward(mystr1, mystr2, len);
	
	if (strcmp(mystr1, mystr2) == 0) {
		printf("회문\n");
	}
	else {
		printf("비회문\n");
	} 
	
	return 0;
}

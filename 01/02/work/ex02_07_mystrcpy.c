#include <stdio.h>

void mystrcpy(char mystr2[], char mystr1[]) {
	int i = 0 ;
	
	/*
	while(mystr1[i]) {
		mystr2[i] = mystr1[i] ;
		i++;
	}
	
	mystr2[i] = '\0';
	*/
	
	while(*(mystr1+i)) {
		*(mystr2+i) = *(mystr1+i) ;
		i++;
	}
	
	*(mystr2+i) = '\0';
	
}

void mystrcpy2(int* mystr3, int* mystr1) {
	while(*mystr1) {
		*mystr3++ = *mystr1++;
	}
	
	*mystr3 = '\0';
}

int main() {
	char mystr1[256];
	char mystr2[256];
	char mystr3[256];

	gets(mystr1);

	mystrcpy(mystr2, mystr1);
	puts(mystr2);
	
	mystrcpy(mystr3, mystr1);
	puts(mystr3);

	return 0;
}

#include <stdio.h>

int main() {
	int arr[6] = {1,3,7,1,9,3};
	int len = sizeof(arr) / sizeof(int) ;
	int i;
	
	for(i=0; i<len; i++) {
		if (arr[i] % 2 == 0) break;
	}

	if ( i == len ) printf("짝수가 존재하지 않습니다.\n") ;
	else printf("%d\n", arr[i]);
}

/*
1805 : 입체기동장치 생산공장 : 구조체 동적할당   
*/
##include <stdio.h>
typedef struct device {
	int id;
	int gas;
} DEVICE;

void swap(DEVICE* a, DEVICE* b) {
	DEVICE temp ;
	temp = *a ;
	*a = *b ;
	*b = temp;
}

int main() {
	DEVICE* d = malloc(sizeof(DEVICE) * 100);
	int n;
	int i, j;
	
	scanf("%d", &n) ;
	for(i=0; i<n ; i++) {
		scanf("%d %d", &(d+i)->id, &(d+i)->gas);
	}
	
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++) {
			if ( (d+i)->id > (d+j)->id) swap((d+i), (d+j)) ;
		}
	}
	
	for(i=0; i<n; i++){
		printf("%d %d\n", (d+i)->id, (d+i)->gas);
	}
	
	free(d); 
	return 0;
}

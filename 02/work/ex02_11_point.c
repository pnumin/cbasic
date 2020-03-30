#include <stdio.h>
typedef struct point {
	int x;
	int y;
} PT;

int main() {
	PT* pt1 = malloc(sizeof(PT)) ;
	
	pt1->x = 1;
	pt1->y = 1;
		
	printf("(%d, %d)\n", pt1->x, pt1->y);
	
	return 0;
}



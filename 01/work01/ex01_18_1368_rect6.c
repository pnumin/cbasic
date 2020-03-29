/*
1368 : 평행사변형 출력하기 2
이번엔 공백의 방향까지 정하여 평행사변형을 만들자.
방향 정보는 다음과 같다.

L=왼쪽 아래에 공백
R=오른쪽 아래에 공백
다음 조건에 맞춰 평행사변형을 출력한다.
높이 h와 밑변 k, 방향 정보 d가 한줄로 공백으로 분리되어 입력된다.(1<=n<=100,2<=k<=100, d=L또는R )
*/
#include <stdio.h>

int main() {
    int h, n, i, j, mid;
    char check;
    
    scanf("%d %d %c", &h,&n,&check);
    fflush(stdin); 
     
    for(i=1; i<=h; i++) {
    	if (check == 'R') { 
    		for (j=1; j<=h-i; j++) printf(" ");
		}
    	else if (check == 'L') {
    		for (j=1; j<i; j++) printf(" ");
		}
    	for (j=1; j<=n; j++) {
            printf("*"); 
        }
        printf("\n");
    }
     
    return 0;
}


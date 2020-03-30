/*
3019 : 스케줄 정리
순서없이 적힌 스케줄 메모가 있다.

메모는 스케줄명, 연, 월, 일 의 형태로 구성되어 있다.
이 메모를 토대로 날짜가 빠른 순서로 정렬하여 출력하고자 한다.
만약 날짜가 동일한 경우 스케줄명의 사전식 순서로 오름차순 정렬한다.

입력
첫째줄에 데이터의 개수 n이 입력된다.(1<=n<=100)
그 다음줄부터 n개의 데이터가 스케줄명, 년, 월, 일 형태로 한 줄에 하나씩 입력된다. 
스케줄명은 공백없이 알파벳소문자 99글자 이하, 년월일은 유효한 날짜만 입력된다. 

출력 
가장 먼저 해야 할 스케줄명부터 정렬하여  출력한다. 
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct schedule {
	char memo[21];
	char y[5];
	char m[3];
	char d[3]; 
	char ymdmemo[40] ;
} SCH;


int compareymmemo(const void *m, const void *n) {
    SCH *pa = (SCH *)m;
    SCH *pb = (SCH *)n;
    return strcmp(pa->ymdmemo , pb->ymdmemo) ;
}

void swap(SCH* sch1, SCH* sch2) {
	SCH temp;
	
	temp = *sch1 ;
	*sch1 = *sch2 ;
	*sch2 = temp ;
}

int main() {
	SCH* sch = malloc(sizeof(SCH) * 100);
	int n;
	int i, j, size;
	
	scanf("%d", &n) ;
	for(i=0; i<n ; i++) {
		scanf("%s %s %s %s", (sch+i)->memo,(sch+i)->y,(sch+i)->m,(sch+i)->d); 
		//숫자 한자리도 들어옴 
		
		if (strlen((sch+i)->y)!=4) { 
			size = strlen((sch+i)->y) ;
			for(j=size-1; j>=0; j--) {
				(sch+i)->y[3-j] = (sch+i)->y[j]; 
			}
			for(j=0; j<4-size; j++) {
				(sch+i)->y[j] = '0';
			} 
		}
		
		if (strlen((sch+i)->m) == 1) {
			(sch+i)->m[1] = (sch+i)->m[0];
			(sch+i)->m[0] = '0';
		}
		
		if (strlen((sch+i)->d) == 1) {
			(sch+i)->d[1] = (sch+i)->d[0];
			(sch+i)->d[0] = '0';
		}
		
		strcat((sch+i)->ymdmemo,(sch+i)->y);
		strcat((sch+i)->ymdmemo,(sch+i)->m);
		strcat((sch+i)->ymdmemo,(sch+i)->d);  
		strcat((sch+i)->ymdmemo,(sch+i)->memo); 
	}
 	
	// 정렬할 배열, 요소 개수, 요소 크기, 비교 함수를 넣어줌	
	qsort(sch, n, sizeof(SCH), compareymmemo);  
	for(i=0; i<n; i++){
		printf("%s\n", (sch+i)->memo) ;
	}
 
	free(sch) ;
	return 0;
}


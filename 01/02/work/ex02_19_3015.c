/*
3015 : 성적표 출력
세종이는 정보과학 선생님인 JH를 도와주기 위해 정보과학 성적처리 프로그램을 만들기로 했다.
JH 선생님은 학생들의 명단과 점수를 입력하면 상위 m명의 학생 명단을 출력해 주기를 원한다.

다음 조건을 만족하는 프로그램을 작성해 보자. 

입력
첫째 줄에 데이터의 개수 n (3<=n<=100)과 출력인원 m (1<=m<=n)이 공백으로 구분되어 입력된다.
둘째 줄부터 학생 이름과 점수(0 100)가 공백으로 구분되어 입력된다. 
단 이름의 길이는 최대 10바이트 이내이다. 

출력
상위 m명의 학생명단을 출력한다.
단, 출력순서는 점수가 높은 학생이 먼저 출력되며, 점수가 같을 경우 입력 순서가 빠른 순서로 출력한다. 
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct num {
	int n;
	int in;
	int order;
} NUM;
 
int compareIn(const void *m, const void *n) {
    NUM *pa = (NUM *)m;
    NUM *pb = (NUM *)n;
    return pa->in - pb->in;
 
}
 
int compareOrder(const void *m, const void *n) {
    NUM *pa = (NUM *)m;
    NUM *pb = (NUM *)n;
    return pa->n - pb->n;
 
}
 
int main() {
	NUM* d = malloc(sizeof(NUM) * 50000);
	int n;
	int i, j;
	
	scanf("%d", &n) ;
	for(i=0; i<n ; i++) {
		scanf("%d", &(d+i)->n);
		(d+i)->in = i+1 ;
	}
		
	// 정렬할 배열, 요소 개수, 요소 크기, 비교 함수를 넣어줌
    qsort(d, n, sizeof(NUM), compareOrder);
	for(i=0; i<n; i++){
		(d+i)->order = i ;	
	}
	qsort(d, n, sizeof(NUM), compareIn);
	for(i=0; i<n; i++){
		printf("%d ", (d+i)->order) ;
	} 
	free(d) ;
	return 0;
}


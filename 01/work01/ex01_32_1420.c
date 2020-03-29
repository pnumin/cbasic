/*
1420 : 3등 찾기
민준이는 뒤늦게 정보 과목의 중요성을 깨닫고 학습실에서 공부를 하고 있다.
기본 공부가 너무 안 되어 있어 아주 쉬운 문제부터 어려움을 겪은 민준이는 친구에게 물어보려고 한다.
가장 잘 하는 친구에게 물어보기는 질문의 내용이 너무 부끄러워 n명의 친구들 중 정보 성적이 3번째로 높은 친구에게 묻고자 한다.

친구들의 성적은 모두 다르다.
n명의 친구들의 이름과 정보 성적이 주어졌을 때 성적이 세 번째로 높은 학생의 이름을 출력하시오.
*/
#include <stdio.h>
int main()
{
    char name[50][50];
	int score[50], rank[50];
	int n, i, j,temp;
	 
    scanf("%d", &n) ;
    
    for(i=0; i<n ; i++) {
    	scanf("%s", &name[i]);
    	scanf("%d", &score[i]);
    	rank[i]  = score[i]  ;
	}
	
	/*
	//rank[i] 배열을 모두 1로 초기화 
	//각 항목을 다른 항목과 비교해서 등수를 카운팅  
	for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            if(score[i] < score[j])
                rank[i]++;
	*/
	
	for(i=0; i<n-1; i++) {
		for(j=i+1; j<n; j++) {
			if (rank[i] < rank[j]) {
				temp = rank[i];
				rank[i] = rank[j];
				rank[j] = temp;
			}
		}
	}
	 
	for(i=0; i<n ; i++) {
		if ( score[i] == rank[2] ) {
			printf("%s", name[i]);
			break;
		}
	}
    return 0; 
}


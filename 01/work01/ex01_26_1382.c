/*
모 드라마의 한 장면에서 어떤 남자가 신의 속도로 코딩을 하면서,

"1줄로 짤 코드를 누가 10줄로 만들어 놓았어요?"
라고 말하는 장면이 프로그래머들 사이에서 주목을 받게 되었다.
https://www.facebook.com/yoons702/videos/550660535052460/ 
다시 보기로 분석한 결과 이 남성이 작성한 코드는 구구단 중 2~5단을 예쁘게 출력하는 클래스인 것으로 확인되었다.
일명 GuguClass !!
이 남자가 작성한 코드의 실행 결과는 다음과 같다.
*/
#include <stdio.h>

int main() {
    int k, i, j; 

    for (i=1; i<=9 ; i++) {
        for (j=2; j<=5; j++) {
        	printf("%d x %d = %2d", j, i, i*j);
        	if (j != 5) printf("\t");
        	else printf("\n");
		}
    }
 
    return 0;
}


#include <stdio.h>
#include <string.h>
int main(){
	char words[100]; //사용자가 입력하는 문자열 저장할 정보(배열)
	char alpabet[30]; //사용자가 입력한 문자열과 비교할 기준정보(배열)
	int count = 0; //카운팅역학 정보(정수형)
	int counter[30] = {0,}; //카운팅의 결과 저장할 정보(배열)
	
	printf("문자열을 입력하세요 : ");
	scanf("%s", words);
	//기준정보저장
	for(int i=0; i<=25; i++){ //int i 바로 선언가능!
		alpabet[i] = i + 97;
	}
	
	//사용자가 입력한 정보와 기준정보 비교
	for(int i=0; i<=25; i++){
		for(int j=0; j<=strlen(words); j++){ //strlen = 입력받은 문자열의 길이를 구하는 함수
			if(alpabet[i] == words[j]){ //비교
			counter[i] = ++count;
			}
		}
		count = 0;
	}
	//그 결과 출력
	for(int i=0; i<=25; i++) {
        if (counter[i] > 0) {
            printf("%c : %d \n", alpabet[i], counter[i]);
        }
    }
    
    return 0;
}
//pointer로 만들어보기 과제
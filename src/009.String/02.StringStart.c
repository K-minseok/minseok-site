#include <stdio.h>
int main(){
	char sentence_1[6] = {'K', 'o', 'r', 'e', 'a', '\0'};
	char sentence_2[6] = {'K', 'o', 'r', 'e', 'a', 0};//문자형은 ''작은따옴표로
	char sentence_3[6] = {"Korea"}; //문자열은 "" 큰따옴표로
	
	printf("sentence_1 : %s \n", sentence_1); //%s로 문자열을 출력한다
	printf("sentence_2 : %s \n", sentence_2);
	printf("sentence_3 : %s \n", sentence_3);
	
	return 0;
}
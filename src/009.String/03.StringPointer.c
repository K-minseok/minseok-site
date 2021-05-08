#include <stdio.h>
int main(){
	char word[30] = {"Long Semtence"};
	char *str = word;
	
	printf("%s \n", str);//주소에 저장된 값 출력
	printf("%p \n", str);//주소값 출력
	
	return 0;
}
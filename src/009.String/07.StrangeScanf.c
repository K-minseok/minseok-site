#include <stdio.h>
int main(){
	int num;
	char c;
	
	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);
	
	printf("문자를 입력하세요 : ");
	scanf("%c", &c); // \n 대행문자가 버퍼에 남아있다
	
	return 0;
}
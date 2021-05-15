#include <stdio.h>
int main(){
	char input;
	
	printf("아무 문자나 숫자 하나를 입력하세요. : ");
	scanf("%c", &input);
	
	if(48 <= input && input <=57){
		printf("%c는(은) 숫자입니다. \n", input);
	}
	else{
		printf("%c는(은) 숫자가 아닙니다. \n", input);
	}
	
	return 0;
}
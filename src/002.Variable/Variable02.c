#include <stdio.h>

int main()
{
	int a;
	a = 127;
	
	printf("%d의 %o : %d진수 표현입니다. \n", a, a, 8); //8진수
    printf("%d의 %d : %d진수 표현입니다. \n", a, a, 10); //10진수
	printf("%d의 %x : %d진수 표현입니다. \n", a, a, 16); //16진수
	
	return 0;
}
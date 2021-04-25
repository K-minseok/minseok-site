#include <stdio.h>

int main()
{
	int a;
	a = 127;
	
	printf("%d의 %d 진수 표현은 : %o \n", a, 8, a);
	printf("%d의 %d 진수 표현은 : %d \n", a, 10, a);
	printf("%d의 %d 진수 표현은 : %x \n", a, 16, a);
	
	//(127)의 (177)은 (8)진수 표현입니다.
	printf("%d를 %o로 바꾸어 나타내는 것은 %d진수 표현입니다. \n", a, a, 8); //8진수
    printf("%d를 %d로 바꾸어 나타내는 것은 %d진수 표현입니다. \n", a, a, 10); //10진수
	printf("%d를 %x로 바꾸어 나타내는 것은 %d진수 표현입니다. \n", a, a, 16); //16진수
	
	return 0;
}
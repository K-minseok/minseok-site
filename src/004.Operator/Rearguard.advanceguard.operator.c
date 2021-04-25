#include <stdio.h>

int main()
{
	int a = 1;
	
	printf("전위연산자 수행 후 : %d \n", --a); //1이 더해지고 출력된다
	
	a = 1; //a를 1로 초기화
	printf("후위연산자 수행 후 : %d \n", a--); //출력되고 1이 더해진다
	printf("최종적인 a값 : %d \n", a);
	
	return 0;
}
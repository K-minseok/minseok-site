#include <stdio.h>

int main()
{
	int a, b;
	a = 10;
	b = 3;
	
	printf("a + b는 : %d \n", a + b);
	printf("a - b는 : %d \n", a - b);
	printf("a * b는 : %d \n", a * b);
	printf("a / b는 : %d \n", a / b);
	printf("a %% b는 : %d \n", a % b);
	
	//printf("a / b는 : %f \n", a / b); %f 넣으면 오류발생
	
	return 0;
}
#include <stdio.h>

int main()
{
	double i, j;
	printf("하나의 숫자를 입력하세요! : ");
	scanf("%lf", &i);
	printf("%f를 나누고 싶은 수를 입력하세요 : ", i);
	scanf("%lf", &j);
	
	if(j == 0)
	{
		printf("0으로 나눌 없습니다. \n");
		return 0;
	}
	
	printf("%f를 %f로 나눈 결과는 : %f \n", i, j, i / j);
	
	return 0;
}
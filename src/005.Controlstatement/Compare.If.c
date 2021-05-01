#include <stdio.h>

int main()
{
	int i, j;
	
	printf("숫자를 하나 입력해주세요! : ");
	scanf("%d", &i);
	printf("%d와 비교할 수를 하나 입력해주세요! : ", i);
	scanf("%d", &j);
	
	if(i > j)
	{
		printf("%d는 %d보다 큽니다! \n", i, j);
	}
	
	if(i < j)
	{
		printf("%d는 %d보다 작습니다! \n", i, j);
	}
	
	if(i >= j)
	{
		printf("%d는 %d와 크거나 같습니다! \n", i, j);
	}
	
	if(i <= j)
	{
		printf("%d는 %d보다 작거나 같습니다! \n", i, j);
	}
	
	if(i == j)
	{
		printf("%d는 %d와 같습니다! \n", i, j);
	}
	
	else
	{
		printf("%d를 %d와 비교하기 싫습니다! \n", i, j);
	}
	
	return 0;
}
	
#include <stdio.h>

int main()
{
	int num;
	
	printf("아무 숫자나 입력해보세요 : ");
	scanf("%d", &num);
	
	if(num == 7)
	{
		printf("행운의 숫자 7이군요! \n");
	}
	
	else if(num == 4)
	{
		printf("죽음의 숫자 4이군요;; \n");
	}
	
	else
	{
		printf("재미없는 평범한 숫자군요. \n");
	}
	
}
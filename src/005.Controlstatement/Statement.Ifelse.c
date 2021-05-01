#include <stdio.h>

int main()
{
	int num;
	
	printf("아무 숫자나 입력해 보세요 : ");
	scanf("%d", &num);
	
	if(num == 7)
	{
		printf("행운의 숫자 7이군요! \n");
	}
	
	else
	{
		printf("음 보통 숫자군요 음... 거기에 %d를 더해서 다시 입력해보세요! \n", 7 - num);
		scanf("%d", &num);
		if(num == 7)
		{
			printf("행운의 숫자 7을 입력하셨습니다! 축하드려요! \n");
		}
		
		else 
		{
			printf(";;; 덧셈, 뺄셈을 못하시나요? \n");
		}
	}
	
	return 0;
}
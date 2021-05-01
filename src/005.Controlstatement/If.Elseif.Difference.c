#include <stdio.h>

int main()
{
	int num;
	
	printf("아무 숫자나 입력해주세요! : ");
	scanf("%d", &num);
	
	if(num == 7)
	{
		printf("a 행운의 숫자 7이군요! \n");
	}
	 
	else if(num == 8)
	{
		printf("b 행운의 숫자 8이군요! \n");
	}
	
	else if(num == 9)
	{
		printf("c 행운의 숫자 9이군요! \n");
	}
	
	else if(num == 10)
	{
		printf("d 행운의 숫자 10이군요! \n");
	}
	
	return 0;
	
}
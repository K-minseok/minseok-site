#include <stdio.h>

int main()
{
	int score;
	
	printf("당신의 수학점수를 입력하세요! : ");
	scanf("%d", &score);
	
	if(score >= 90)
	{
		printf("당신은 합격입니다! \n");
	}
	
	else if(score >= 80)
	{
		printf("조금만 더 노력하면 합격할 수 있습니다! 지금 점수는 불합격입니다. \n");
	}
	
	else if(score <= 50)
	{
		printf("당신이 사람입니까? 공부 좀 하세요! \n");
	}
	
	else
	{
		printf("당신은 불합격입니다! 시험을 다시 응시하세요! \n");	
	}
	
	return 0;
	
}
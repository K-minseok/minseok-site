#include <stdio.h>

int main()
{
	float ave_score;
	float korean, english, math, science;
	
	printf("국어, 영어, 수학, 과학 점수를 각각 입력해주세요! (입력후 엔터) \n");
	scanf("%f %f %f %f", &korean, &english, &math, &science);
	
	ave_score = (korean + english + math +science) / 4;
	printf("당신의 평균 점수는 %f입니다! \n", ave_score);
	
	if(ave_score >= 90)
	{
		printf("당신의 우등생입니다. \n");
	}
	
	else if(ave_score >= 40)
	{
		printf("조금만 더 노력하세요. \n");
	}
	
	else 
	{
		printf("당신은 사람이 아닙니다. \n");
	}
	
	return 0;
}
#include <stdio.h>
int main()
{
	int score[3][3];
	int i, j;
	float k;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if(j==0)
			{
				printf("%d번째 학생의 국어 점수 : ", i+1);
				scanf("%d", &score[i][j]);
			}
			else if(j==1)
			{
				printf("%d번째 학생의 수학 점수 : ", i+1);
				scanf("%d", &score[i][j]);
			}
			else
			{
				printf("%d번째 학생의 영어 점수 : ", i+1);
				scanf("%d", &score[i][j]);
			}
		}
	}
	for(i=0; i<3; i++)
	{
		k = score[i][0] + score[i][1] + score[i][2];
		printf("%d번째 학생의 국어 점수 : %d, 수학 점수 : %d, 영어 점수 : %d, 세 과목의 평균 : %.2f \n", i+1, score[i][0], score[i][1], score[i][2], k / 3);
	}
	
	return 0;
}
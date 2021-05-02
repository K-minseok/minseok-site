#include <stdio.h>
int main()
{
	double arr[10];
	int i;
	double ave = 0;
	for(i=0; i<10; i++)
	{
		printf("%d번째 학생의 성적은? ", i+1);
		scanf("%lf", &arr[i]); //double과 lf와 같이 구문이 맞게 맞춰주기
	}
	for(i=0; i<10; i++)
	{
		ave = ave + arr[i];
	}
	ave = ave / 10;
	printf("전체 학생의 평균은 : %.2f \n", ave);
	for(i=0; i<10; i++)
	{
		printf("학생 %d : ", i + 1);
		if(arr[i] >= ave)
		{
			printf("합격 \n");
		}
		else
		{
			printf("불합격 \n");
		}
	}
	return 0;
}
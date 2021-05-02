#include <stdio.h>
int main()
{
	int a;
	printf("학생들은 총 몇 명입니까? "); 
	scanf("%d", &a);                 
	int arr[a]; //배열에 변수를 지정하려면 변수 값을 위에서 지정해줘야 한다.
	int i, ave = 0;
		
	for(i=0; i<5; i++)
	{
		printf("%d번째 학생의 성적은? ", i+1);
		scanf("%d", &arr[i]); //배열의 5개의 원소값 초기화 및 지정
	}
	
	for(i=0; i<5; i++)
	{
		ave = ave + arr[i]; //5개의 원소들의 합 계산
	}
	printf("학생들의 평균은 %d점입니다. \n", ave / a);
	
	return 0;
}
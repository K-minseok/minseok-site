#include <stdio.h>
int main()
{
	int i, j, k, l, a;
	l = 0;
	printf("별을 몇 칸 쌓을지 알려주세요 : ");
	scanf("%d", &a);
	for (i=0; i<a; i++)
	{
		for(k=0; k<a-i-1; k++)
		{
			printf(" "); //띄어쓰기
		}
		
		for(j=0; j<=l; j++)
		{
			printf("*");
		}
		l+=2;//별 갯수 두개씩 증가
		printf("\n");
	}
	return 0;
}
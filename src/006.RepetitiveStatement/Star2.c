#include <stdio.h>
int main()
{
	int i, j, k, a;
	printf("별을 몇 칸 쌓을지 알려주세요 : ");
	scanf("%d", &a);
	for (i=0; i<a; i++)
	{
		for(k=0; k<i*2-i; k++)
		{
			printf(" "); //띄어쓰기
		}
		
		for(j=0; j<a*2-2*i-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
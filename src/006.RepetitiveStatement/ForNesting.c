#include <stdio.h>
int main()
{
	int i, j;
	
	for(i = 2; i < 10; i++)
	{
		if(i % 3 ==0)
		{
			continue;
		}
		for(j = 1; j < 10; j++)
		{
			printf("%d x %d = %d \n", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}
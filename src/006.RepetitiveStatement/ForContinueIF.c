#include <stdio.h>
int main()
{
	int i;
	
	for(i = 0; i < 100; i++)
	{
		if(i % 5 == 0)
		{
			continue;
		}
			
		if(i % 10 == 1)
		{
			printf("\n");
		}
	   		printf("%2d ", i);
	}
		if(i % 9 == 0)
	{
    	printf("\n");
	}
	printf("\n");
	
	return 0;
}
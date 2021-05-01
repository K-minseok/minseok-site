#include <stdio.h>
int main()
{
	int i = 1;
	
	while(i)
	{
		printf("%d ", i);
		i++;
		
		if(i==16)
		{
			break;
		}
	}
	printf("\n");
	
	return 0;
}
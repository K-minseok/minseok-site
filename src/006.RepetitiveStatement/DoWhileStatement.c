#include <stdio.h>
int main()
{
	int i = 1, sum = 0;
	do
	{
		sum += 1;
		i++;
	}
	while(i < 1);
	
	printf("sum : %d \n", sum);
	
	return 0;


}
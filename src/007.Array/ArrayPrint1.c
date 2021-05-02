#include <stdio.h>
int main()
{
	int arr[10] = {2, 10, 30, 21, 34, 23, 53, 21, 9, 1};
	int i;
	
	printf("몇 번째 원소의 값을 보여줄까요? ");
	scanf("%d", &i); 
	
	printf("%d번째 원소는 %d입니다. \n", i, arr[i-1]);
	
	return 0;
}
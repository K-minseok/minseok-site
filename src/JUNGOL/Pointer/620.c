#include <stdio.h>
int main(){
	int *p;
	int i;
	p = &i;
	
	printf("정수를 입력하세요 : ");
	scanf("%d", &*p);
	
	printf("%d...%d \n", *p/10, *p%10);
	printf("%d...%d \n", i/10, i%10);
		
	return 0;
}
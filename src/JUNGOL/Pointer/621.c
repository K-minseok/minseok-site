#include <stdio.h>
int main(){
	int i, j;
	int *p, *o; // int* p, o는 p만 포인터가 된다
		
	printf("정수를 두개 입력해주세요 : ");
	scanf("%d %d", &i, &j);
	
	p = &i;
	o = &j;
	
	printf("%d + %d = %d \n", *p, *o, *p + *o);
	printf("%d - %d = %d \n", *p, *o, *p - *o);
	printf("%d * %d = %d \n", *p, *o, *p * *o);
	printf("%d / %d = %d \n", *p, *o, *p / *o);
	
	return 0;
}
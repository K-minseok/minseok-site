#include <stdio.h>
int main(){
	int i;
	int *p;
	p = &i;
	
	printf("정수를 입력하세요 : ");
	scanf("%d", &i);
	
	printf("정수의 주소 : %p \n", p); //&i = p
	printf("정수의 주소 : %p \n", &i); //&i = p
	printf("정수 : %d \n", i); // *p = i
	printf("정수 : %d \n", *p); // *p = i
	
	return 0;
}
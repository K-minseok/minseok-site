#include <stdio.h>
int main(){
	int *p;
	int a;
	
	p = &a;
	*p = 3;
	
	printf("a의 값 : %d \n", a);
	printf("a의 값 : %d \n", *p);
	// printf("*p의 값 : %p \n", p); %p로 해야지 변수가 저장되있는 주소값을 출력함
	
	return 0;
}
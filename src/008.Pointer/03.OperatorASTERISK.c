#include <stdio.h>
int main(){
	int *p; //*(asterisk) : 포인터 타입 선언
	int a;
	
	p = &a;
    *p = 3; //*p란 주소에 3이라는 값을 바로 입력할 수도 있음
	
	printf("a의 값 : %d \n", a);
	printf("*p의 값 : %d \n", *p); //*p를 쓰면 주소 안에 있는 값 출력, *(asterisk) : 연산자
	
	return 0;
}
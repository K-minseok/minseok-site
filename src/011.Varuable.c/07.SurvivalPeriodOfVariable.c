#include <stdio.h>
int function();
int main(){
	int* pa = function(); //이미 소멸된 변수 a(function 함수)의 주소를 가리킴
	printf("%d \n", *pa);
	
	return 0;
}

int* function(){
	int a = 2;
	return &2;
}

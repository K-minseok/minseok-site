#include <stdio.h>
int* function();
int main(){
	int* pa = function();
	printf("%d \n", *pa);
	
	return 0;
}

int* function(){
	static int a = 2; //정적변수(지역 외에서도 소멸되지 않는 변수) -> static
	
	return &a;
}

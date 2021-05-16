#include <stdio.h>
void function();
int main(){
	int a = 3;
	function();
	
	printf("a = %d \n", a);
	
	return 0;
}

void function(){
	int a = 2; //정의된 변수는 일반적으로 함수 내에서만 접근 가능(지역변수)
}
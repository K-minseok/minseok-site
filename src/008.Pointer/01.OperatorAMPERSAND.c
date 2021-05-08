#include <stdio.h>
int main(){
	int a;
	a = 2;
	
	printf("a의 주소값 : %p \n", &a); // 주소값을 출력하려면 %p(pointer)를 써야됨 뒤에 &쓰고

	return 0;
}
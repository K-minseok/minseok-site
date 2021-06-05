#include <stdio.h>
struct TEST {
	int c;
	int *pointer; //구조체의 멤버변수가 포인터
};

int main() {
	struct TEST t;
	struct TEST *pt = &t;
	int i = 0;
	
	t.pointer = &i; //t의 멤버 pointer는 i를 가리킴
	*t.pointer = 3; //t의 멤버 pointer가 가리키는 변수의 값을 3으로 할당
	
	printf("i : %d \n", i);
	
	//->가 *보다 우선순위가 높으므로 먼저 해석
	//pt가 가리키는 구조체 변수의 pointer 멤버가 가리키는 변수의 값을 4로 변경
	*pt->pointer = 4; //*t.pointer = 4와 동일
	
	printf("i : %d \n", i);
	
	return 0;
}
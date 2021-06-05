#include <stdio.h>
struct TEST {
	int c;
};

int main() {
	struct TEST t;
	struct TEST *pt = &t;
	
	(*pt).c = 0; //pt가 가리키는 구조체 변수의 c멤버의 값을 0으로 할당
	printf("t.c : %d \n", t.c);
	pt->c = 1; //pt가 가리키는 구조체 변수의 c멤버의 값을 1으로 할당
	printf("t.c : %d \n", t.c);
	
	return 0;	
}
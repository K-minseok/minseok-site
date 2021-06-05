#include <stdio.h>
struct test {
	int a, b;
};

int main() {
	struct test st;
	struct test *ptr;
	
	ptr = &st;
	
	// *ptr.a = 1; 연산자 우선순위에 따라서 .이 먼저 실행이되 오류가 뜬다
	(*ptr).a = 1;
	(*ptr).b = 2;
	
	printf("st의 a 멤버 : %d \n", st.a);
	printf("st의 b 멤버 : %d \n", st.b);
	
	return 0;
}
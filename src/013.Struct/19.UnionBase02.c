#include <stdio.h>
union A {
	int i;
	char k; //2byte
	short j; //4byte
};
int main() {
	union A a;
	a.i = 0x12345678;
	printf("%x \n", a.k);
	printf("%x \n", a.j);
		
	return 0;
}
#include <stdio.h>
int main(){
	int a;
	char b;
	double c;
	int *pa = &a;
	char *pb = &b;
	double *pc = &c;
	
	printf("pa(int)의 값 : %p \n", pa);
	printf("(pa + 1)의 값 : %p \n", pa + 1);
	printf("pb(char)의 값 : %p \n", pb);
	printf("(pb + 1)의 값 : %p \n", pb + 1);
	printf("pc(double)의 값 : %p \n", pc);
	printf("(pc + 1)의 값 : %p \n", pc + 1);
	
	return 0;
}
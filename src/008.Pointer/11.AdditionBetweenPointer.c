#include <stdio.h>
int main(){
	int a;
	int *pa = &a;
	int b;
	int *pb = &b;
	int *pc = pa + pb; //주소값 더하기 주소값은 아무의미 없는 주소값이 나오기에 오류가 난다
	
	return 0;
}
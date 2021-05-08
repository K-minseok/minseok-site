#include <stdio.h>
//사용자에게 입력받은 정수를 2배로 증가
void change_double(int *p){
	*p = *p * 2;
}

int main(){
	
	int num;
	
	printf("숫자 입력 : ");
	scanf("%d", &num);
	
	change_double(&num);
	printf("두배 증가 : %d \n", num);
	
	return 0;
}

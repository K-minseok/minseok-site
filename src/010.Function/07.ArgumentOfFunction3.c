#include <stdio.h>
int change_val(int i){
	i = 3; //이 i와 아래 main 의 함수는 주소부터 다르다
	
	return 0;
}

int main(){
	int i = 0;
	
	printf("호출 이전 i의 값 : %d \n", i);
	change_val(i); //바꿔도 main 함수의 i는 0으로 정의되어 있으므로 호출 이후에 i의 값이 바뀌지 않는다
	printf("호출 이후 i의 값 : %d \n", i);
	
	return 0;
}
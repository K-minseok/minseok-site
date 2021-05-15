#include <stdio.h>
int swap(int *a, int *b); //이 함수를 쓸거다 라고 선언 함수를 쓸때는 항상 맨 위로
int main(){
	int i = 3;
	int j = 5;
	
	printf("SWAP 이전 : i : %d, j : %d \n", i, j);
	swap(&i, &j);
	printf("SWAP 이후 : i : %d, j : %d \n", i, j);
	
	return 0;
}

int swap(int *a, int *b){
	int temp = *a;
	
	*a = *b;
	*b = temp;
	
	return 0;
}
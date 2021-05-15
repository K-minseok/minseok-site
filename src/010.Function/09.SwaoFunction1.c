#include <stdio.h>
int swap(int a, int b){
	int temp = a;
	
	a = b;
	b = temp; //여기서(swap 함수) 값이 바뀐다고 해도 main 함수의 i, j 값은 바뀌지 않는다
	
	return 0;
}

int main(){
	int i, j;
	
	i = 3;
	j = 5;
	
	printf("SWAP 이전 : i : %d, j : %d \n", i, j);
	swap(i, j);
	printf("SWAP 이후 : i : %d, j : %d \n", i, j);
	
	return 0;
}
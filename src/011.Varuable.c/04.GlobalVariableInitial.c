#include <stdio.h>
int global; //전역변수는 그냥 0으로 초기화 되어 있다 즉 바로 printf하면 0이 나온다
int function(){
	global++;
	
	return 0;
}

int main(){
	function();
	printf("%d \n", global);
	
	return 0;
}
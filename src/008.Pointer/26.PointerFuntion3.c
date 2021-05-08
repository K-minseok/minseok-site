#include <stdio.h>
void change_plus_one(int *n){
	*n += 1;
}

int main(){
	int number = 3;
	printf("%d \n", number);
	
	number = 4;
	printf("%d \n", number);
	
	change_plus_one(&number); //위로 올라가서 int *n = &number가 된다
	printf("%d \n", number); //위에서 주소에 들어있는 값을 바꿔서 4가 5가 된것이다
	
	return 0;
}
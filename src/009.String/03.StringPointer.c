#include <stdio.h>
int main(){
	char word[30] = {"Long Semtence"};
	char *str = word;
	
	printf("%s \n", str);//%s를 쓰면 주소에 있는 Long Semtence %p를 쓰면 주소값이 출력된다.
	
	return 0;
}
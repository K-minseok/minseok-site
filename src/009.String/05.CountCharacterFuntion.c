#include <stdio.h>
int str_length(char *str){
	int i = 0;
	while (str[i]){ // 글의 마지막 null까지 가면 0이되서 그만둔다
		i++;
	}
	
	return i;
}

int main(){
	char str[] = {"What is your name?"};
		
	printf("%s \n", str);
	printf("문자열의 길이 : %d \n", str_length(str));
		
	return 0;
}
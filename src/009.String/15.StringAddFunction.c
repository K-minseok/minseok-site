#include <stdio.h>
//문자열 연결 함수
void add_str(char *dest, char *src);
int main(){
	char str1[100] = "Hello my name is ";
	char str2[] = "Kim minseok.";
	
	printf("Add 이전 : %s \n", str1);
	
	add_str(str1, str2);
	
	printf("Add 이후 : %s \n", str1);
	
	return 0;
}

void add_str(char *dest, char *src){
	while(*dest){ //dest의 끝 부분을 찾는다(null)
		dest++;
	}
	//첫 번째 while문을 지나고 나면 dest는 dest 문자열의 NULL 문자를 가리키고 있게 된다.
	//이제 src의 문자열들을 dest의 NULL 문자 있는 곳부터 복사해 넣는다.
	while(*src){
		*dest = *src;
		src++;
		dest++;
	}
	//마지막으로 dest에 NULL 추가 (두 번째 while문에서 src가 NULL이 되어 while문이 종료되었으므로)
	*dest = '\0';
}
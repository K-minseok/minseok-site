#include <stdio.h>
#include <string.h>

int main() {
	char str[50] = "I love Chewing C hahaha";
	char str2[50];
	char str3[50];
	
	memcpy(str2, str, strlen(str) + 1); //문자열 끝을 알 수 있는 null을 위해 1을 더하고
	memcpy(str3, "hello", 6); //문자의 총 개수인 5가 아닌 6을 적는다
	
	printf("%s \n", str);
	printf("%s \n", str2);
	printf("%s \n", str3);
	
	return 0;
}
//한 글자씩 입력받기
#include <stdio.h>
#define FilePath "/workspace/Minseok-site/src/018.FileInputOutput/Files/a.txt"

int main() {
	FILE *fp = fopen(FilePath, "r");
	char c;
	
	if (fp == NULL) {
		printf("읽기 오류!! \n");
		return 0;
	}
	
	printf("한글자씩 입력 받기 : ");
	while ((c = fgetc(fp)) != EOF) { //fgetc : fp에서 한문자씩 읽음. 파일의 제일 마지막 : EOF(End of File : -1)
		printf("%c", c);
	}
	
	fclose(fp);
	
	return 0;
}
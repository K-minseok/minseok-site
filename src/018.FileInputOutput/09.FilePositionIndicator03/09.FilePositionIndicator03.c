//파일의 마지막 문자를 보기
#include <stdio.h>
#define FilePath "/workspace/Minseok-site/src/018.FileInputOutput/Files/some_data.txt"

int main() {
	FILE *fp = fopen(FilePath, "r");
	char data[10];
	char c;
	
	if (fp == NULL) {
		printf("file open error ! \n");
		return 0;
	}
	
	fseek(fp, -1, SEEK_END); //파일 위치지정자를 파일의 제일 마지막으로 이동 후, 왼쪽으로 -1 이동, -1하는 이유는 파일의 제일 마지막은 EOF를 나타내는 값이 있기 때문(아마 NULL)
	
	c = fgetc(fp);
	printf("파일 마지막 문자 : %c \n", c);
	
	fclose(fp);
	
	return 0;	
}
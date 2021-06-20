//fopen의 'append'
#include <stdio.h>
#define FilePath "/workspace/Minseok-site/src/018.FileInputOutput/Files/some_data.txt"

int main() {
	FILE *fp = fopen(FilePath, "a"); // "a" 제일 마지막을 가리키게 된다
	char c;
	if (fp == NULL) {
		printf("파일 열기를 실패하였습니다! \n");
		return 0;
	}
	//아래 내용이 파일 뒤에 추가
	fputs(" Added", fp);
	fclose(fp);
	
	return 0;
}
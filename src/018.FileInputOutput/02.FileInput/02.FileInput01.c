#include <stdio.h>
#define FilePath "/workspace/Minseok-site/src/018.FileInputOutput/Files/a.txt"

int main() {
	FILE *fp = fopen(FilePath, "r");
	char buf[20];
	
	if (fp == NULL) {
		printf("읽기 오류 !! \n");
		return 0;
	}
	
	fgets(buf, 20, fp);
	printf("파일 입력 내용 : %s \n", buf);
	fclose(fp);
	
	return 0;
}
//fseek 함수
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
	
	fgets(data, 5, fp); //두번째 인자(5)의 -1만큼 입력받음(NULL문자떄문)
	printf("입력받은 데이터 : %s \n", data);
	
	c = fgetc(fp);
	printf("그 다음에 입력받은 문자 : %c \n", c);
	
	fseek(fp, -1, SEEK_CUR); //현재 파일 위치지정자에서 -1만큼(왼쪽으로 1) 이동
	
	c = fgetc(fp);
	printf("fseek 실행 후 입력받은 문자 : %c \n", c);
	
	fclose(fp);
	
	return 0;
}
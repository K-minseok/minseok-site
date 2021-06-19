#include <stdio.h>
#define FilePath "/workspace/Minseok-site/src/018.FileInputOutput/Files/b.txt"
//a.txt로 변경해서 실행해보면?
int main() {
	//현재 fp에 abcdef가 들어있는 상태
	FILE *fp = fopen(FilePath, "r");
	
	fgetc(fp); //a
	
	printf("현재 파일 위치지정자의 문자 : %c \n", fgetc(fp)); //위에서 a를 쓰고 b에 가있다
	
	fgetc(fp); //b
	fgetc(fp); //c
	fgetc(fp); //d
	//d까지 입력받았으니 파일 위치지정자는 이제 e를 가리키고 있음
	fseek(fp, 0, SEEK_SET); //파일 위치지정자를 제일 처음으로 회귀
	printf("다시 파일 처음에서 입력 받는다면 : %c \n", fgetc(fp));
	fclose(fp);
	
	return 0;
}
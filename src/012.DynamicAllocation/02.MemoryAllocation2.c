#include <stdio.h>
#include <stdlib.h>

int main() {
	int student; //입력받고자 하는 학생 수
	int i, input;
	int *score; //학생들의 수학점수 변수
	int sum = 0; //총점
	
	printf("학생의 수는? : ");
	scanf("%d", &student);
	
	score = (int *)malloc(student *sizeof(int));
	
	for (i = 0; i < student; i++) {
		printf("학생 %d의 점수 : ", i + 1);
		scanf("%d", &input);
		score[i] = input;
	}
	
	for (i = 0; i < student; i++) {
		sum += score[i];
	}
	
	printf("전체 학생 평균점수 : %d \n", sum / student);
	free(score);
	
		return 0;
}
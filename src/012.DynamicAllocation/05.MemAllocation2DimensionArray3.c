#include <stdio.h>
#include <stdlib.h>

void get_average(int **arr, int numStudent, int numSubject);

int main() {
	int i, j, input = 0;
	int sum = 0;
	int subject, students;
	int **arr;
	
	printf("과목 수 : ");
	scanf("%d", &subject);
	
	printf("학생의 수 : ");
	scanf("%d", &students);
	
	printf("\n");
	
	arr = (int **)malloc(sizeof(int *) * subject);
	
	for (i = 0; i < subject; i++) {
		arr[i] = (int *)malloc(sizeof(int) * students);
	}
	
	for (i = 0; i < subject; i++) {
		printf("과목 %d 점수 -------- \n", i + 1);
		
		for (j = 0; j < students; j++) {
			printf("학생 %d 점수 입력 : ", j + 1);
			scanf("%d", &input);
			arr[i][j] = input;
			
			if (j == (students - 1)) {
			printf("\n");
			}
		}
	}
	
	get_average(arr, students, subject);
	
	for (i = 0; i < subject; i++) {
		free(arr[i]);
	}
	free(arr);
	
	return 0;
}

void get_average(int **arr, int numStudent, int numSubject) {
	int i, j, sum;
	
	for (i = 0; i < numSubject; i++) {
		sum = 0;
		for (j = 0; j < numStudent; j++) {
			sum += arr[i][j];
		}
		printf("과목 %d 평균 점수 : %d \n", i, sum / numStudent);
	}
}
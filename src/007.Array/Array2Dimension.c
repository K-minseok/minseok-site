#include <stdio.h>
int main()
{
	int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; //3행 3열 배열구조
	// 정의 방법 (배열의 형)(배열의 이름)[원소 개수][원소 개수];
	printf("arr 배열의 2행 3열의 수를 출력 : %d \n", arr[1][2]); //앞과 같이 2행 3열=
	printf("arr 배열의 1행 2열의 수를 출력 : %d \n", arr[0][1]); //[1][2]이다
	return 0;
}
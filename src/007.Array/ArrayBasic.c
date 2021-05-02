#include <stdio.h>
int main()
{
	int arr[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //배열 정의 구조
	
	printf("Array 3번째 원소 : %d \n", arr[10]); //배열의 첫 번째 원소는 arr[0]
	                                          //즉 n번째 원소는 arr[n-1]이 된다.
	                                          //원소의 갯수보다 큰 값을 인덱싱하면 오류
	return 0;
}
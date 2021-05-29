#include <stdio.h>
int main() {
	int arr[3] = {1, 2, 3};
	int *parr;
	
	parr = arr; // arr은 배열의 첫 번째 원소를 가리키는 포인터로 형변환됨. (배열명을 포이터에 할당 시)
	            // parr = &arr[0]; 도 동일하다.
	
	printf("arr[1]  : %d \n", arr[1]);
	printf("parr[1] : %d \n", parr[1]);
	
	return 0;
}
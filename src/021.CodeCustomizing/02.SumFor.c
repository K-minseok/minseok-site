#include <stdio.h>

int main() {
	double inputNum, sum = 0;
	
	printf("더하고 싶은 마지막 수를 입력하세요 : ");
	scanf("%lf", &inputNum);
	
	for (int i = 1; i <= inputNum; i++) {
		sum += i;
	}
	
	printf("결과값 : %lf \n", sum);
	
	return 0;
}

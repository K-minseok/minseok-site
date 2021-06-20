#include <stdio.h>
#define FilePath "/workspace/Minseok-site/src/JUNGOL/FileInputOutput/Num.txt"

int main() {
	FILE *fp = fopen(FilePath, "r+");
	int num1, num2 = 0;
	int sum = 0;
		
	fscanf(fp, "%d", &num1);
	fscanf(fp, "%d", &num2);
	
	for (int i = num1; i<=num2; i++) {
		sum += i;
	}
	
	fprintf(fp, " %d", sum);
	
	return 0;
}
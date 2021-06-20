#include <stdio.h>
#define FilePath "/workspace/Minseok-site/src/JUNGOL/FileInputOutput/Num2.txt"

int main() {
	FILE *fp = fopen(FilePath, "r+");
	float num1, num2 = 0;
	float avr = 0;
		
	fscanf(fp, "%f", &num1);
	fscanf(fp, "%f", &num2);
	
	avr = num1 + num2;
	avr = avr / 2;
	
	fprintf(fp, " %.1f", avr);
	fclose(fp);
	
	return 0;
}
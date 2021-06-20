#include <stdio.h>
#define FilePath "/workspace/Minseok-site/src/JUNGOL/FileInputOutput/Name.txt"

int main() {
	FILE *fp = fopen(FilePath, "r+");
	char Name[20];
	char c;
	
	printf("Name Score \n");
	
	while (Name[20] = fgetc(fp) != EOF) {
			
	}
	
	
	for (int i = 0; i<=20; i++) {
		if (i % 2 == 0) {
			printf("%4c", Name[i]);
		}
	    else {
			printf("%5c", Name[i]);
		}
	}
	printf("\n");
	
	
	return 0;
}
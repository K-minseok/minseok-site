#include <stdio.h>
#include <string.h>

int main() {
	char str[50] = "Kim min seok";
	
	printf("%s \n", str);
	printf("memmove 이후 \n");
	memmove(str + 12, str + 3, 9);
	printf("%s \n", str);
	
	return 0;
}
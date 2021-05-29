#include <stdio.h>
int count;
extern void write_extern(); //extern 중요 다른 파일 참조 가능
int main() {
	count = 5;
	write_extern(); 
	
	return 0; 
}
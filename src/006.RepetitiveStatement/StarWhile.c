#include <stdio.h>
int main(){
	int i, j, k=0;

	while(i<5){
		while(){
			printf(" ");
			k++;
		}
		while(j<=i){
			printf("*");
			j++;
		}
		printf("\n");
		j=0;//j가 현재 5이니 0으로 초기화!!
		i++;
	}	
	return 0;
}
//수정 및 추가사항 필요!! 
#include <stdio.h>
#include <string.h>
int main(){
	char words[100];
	char alpabet[30];
	char counter[30];
	int i, j;
	
	printf("문자열을 입력하세요 : ");
	scanf("%s", words);
	
	for(i=0; i<26; i++){
		alpabet[i] = 97 + i;
	}
	
	for(i=0; i<26; i++){
		for(j=0; j<strlen(words); j++){
			if(words[j]==alpabet[i]){
				counter[i] += 1;
			}
		}
	}
	
	for(int i=0; i<26; i++) {
        if (counter[i] != 0) {
            printf("%ls : %d \n", alpabet[i], counter[i]);
        }
    }
	
	return 0;
}
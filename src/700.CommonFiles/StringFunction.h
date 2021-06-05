void copy_str(char *dest, char *src);
void add_str(char *dest, char *src);
int compare(char *str1, char *str2);

void copy_str(char *dest, char *src){
	while(*src){
		*dest = *src;
		src++;
		dest++;
	}
	
	*dest = '\0';
}

void add_str(char *dest, char *src){
	while(*dest){ //dest의 끝 부분을 찾는다(null)
		dest++;
	}
	//첫 번째 while문을 지나고 나면 dest는 dest 문자열의 NULL 문자를 가리키고 있게 된다.
	//이제 src의 문자열들을 dest의 NULL 문자 있는 곳부터 복사해 넣는다.
	while(*src){
		*dest = *src;
		src++;
		dest++;
	}
	//마지막으로 dest에 NULL 추가 (두 번째 while문에서 src가 NULL이 되어 while문이 종료되었으므로)
	*dest = '\0';
}

int compare(char *str1, char *str2) {
    while (*str1) {
        if (*str1 != *str2) {
            return 0; //한 문자라도 다르면 종료
        }

        str1++;
        str2++;
    }

    if (*str2 == '\0') {
        return 1; //str2도 끝이 났는지 검사(두 문자열의 길이 체크)
    }
    
    return 0;
}


#include <stdio.h>
struct Human {
	int age;
	int gender;
};

int set_human(struct Human a, int age, int gender);

int main() {
	struct Human human;
	set_human(human, 10, 1); //나이 10과 성별 1을 인자로 넘김(작동할까?)
	//*특정한 변수의 값을 다른 함수를 통해 바꾸려면 변수의 주소값을 전달해야 한다
	printf("AGE : %d // Gender : %d \n", human.age, human.gender);

	return 0;
}

int set_human(struct Human a, int age, int gender) {
	a.age = age; //main 함수의 구조체와는 별개의 구조체 a의 age에 10이 할당됨
	a.gender = gender; //main 함수의 구조체와는 별개의 구조체 a의 gender에 1일 할당됨

	return 0;
}
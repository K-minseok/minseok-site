#include <stdio.h>
#include <stdbool.h>
#define MAX_STACK_SIZE 5

int stack[MAX_STACK_SIZE];
int top = -1;

//비었는지 검사
int IsEmpty() {
	if (top < 0) {
		return true;
	}
	else {
		return false;
	}
}

//가득 찼는지 검사
int IsFull() {
	if (top >= MAX_STACK_SIZE) {
		return true;
	}
	else {
		return false;
	}
}

//자료삽입(push)
void push(int value) {
	if (IsFull() == true) {
		printf("Stack is Full. \n");
	}
	else {
		stack[++top] = value;
	}
}

//자료삭제(pop)

int pop() {
	if (IsEmpty() == true) {
		printf("Stack is Empty. \n");
	}
	else {
		int currentIndex = top;
		int returnValue = stack[top--];
		stack[currentIndex] = 0;
		return returnValue;	
	}
}

int main() {
	
	push(3);
	push(5);
	push(12);
	push(10);
	push(20);
	push(100);
	
	printf("배열5 : %d \n", stack[5]);
	printf("배열4 : %d \n", stack[4]);
	printf("배열3 : %d \n", stack[3]);
	printf("배열2 : %d \n", stack[2]);
	printf("배열1 : %d \n", stack[1]);
	printf("배열0 : %d \n", stack[0]);
	
	printf("%d \n", pop());
	
	printf("배열5 : %d \n", stack[5]);
	printf("배열4 : %d \n", stack[4]);
	printf("배열3 : %d \n", stack[3]);
	printf("배열2 : %d \n", stack[2]);
	printf("배열1 : %d \n", stack[1]);
	printf("배열0 : %d \n", stack[0]);
	
	printf("\n");
	
	return 0;
}
#include <stdio.h>
#include <stdbool.h>
#define MAX_STACK_SIZE 5

int stack[MAX_STACK_SIZE];
int top = -1;

//비었는지 검사
int IsEmpty() {
	if (top < 0) {
		return 1;
	}
	else {
		return 0;
	}
}

//가득 찼는지 검사
int IsFull() {
	int temp = top;
	if (++temp >= MAX_STACK_SIZE) {
		return 1;
	}
	else {
		return 0;
	}
}

//자료삽입(push)
void push(int value) {
	if (IsFull() == 1) {
		printf("Stack is Full. \n");
	}
	else {
		stack[++top] = value;
	}
}

//자료삭제(pop)

int pop() {
	if (IsEmpty() == 1) {
		printf("Stack is Empty. \n");
	}
	else {
		int currentIndex = top;
		int returnValue = stack[top--];
		stack[currentIndex] = 0;
		printf("%d \n", returnValue);
		// return returnValue;	
	}
}

int main() {
	
	push(3);
	push(5);
	push(12);
	push(10);
	push(20);
	push(100);
	
	printf("-----Stack POP 전----- \n");
	printf("배열5 : %d \n", stack[5]);
	printf("배열4 : %d \n", stack[4]);
	printf("배열3 : %d \n", stack[3]);
	printf("배열2 : %d \n", stack[2]);
	printf("배열1 : %d \n", stack[1]);
	printf("배열0 : %d \n", stack[0]);
	
	printf("\n");
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
	// printf("%d \n", pop());
	// printf("%d \n", pop());
	// printf("%d \n", pop());
	// printf("%d \n", pop());
	// printf("%d \n", pop());
	// printf("%d \n", pop());
	printf("\n");
	
	printf("-----Stack POP 후----- \n");
	printf("배열5 : %d \n", stack[5]);
	printf("배열4 : %d \n", stack[4]);
	printf("배열3 : %d \n", stack[3]);
	printf("배열2 : %d \n", stack[2]);
	printf("배열1 : %d \n", stack[1]);
	printf("배열0 : %d \n", stack[0]);
	
	
	
	return 0;
}
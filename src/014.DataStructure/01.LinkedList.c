#include <stdio.h>
#include <stdlib.h>
//함수들의 원형
struct Node* InsertNode(struct Node* current, int data);
void DestroyNode(struct Node* destroy, struct Node* head);
struct Node* CreateNode(int data);
void PrintNodeFrom(struct Node* from);

//구조체
struct Node {
	int data; //데이터
	struct Node* nextNode; //다음 노드를 가리키는 영역
};

int main() {
	struct Node* Node1 = CreateNode(100);
	struct Node* Node2 = InsertNode(Node1, 200);
	struct Node* Node3 = InsertNode(Node2, 300);
	
	struct Node* Node4 = InsertNode(Node2, 400);
	
	DestroyNode(Node3, Node1);
	
	PrintNodeFrom(Node1);
	
	return 0;
}

//전체 노드 리스트 출력 함수
void PrintNodeFrom(struct Node* from) {
	while (from) {
		printf("노드의 데이터 : %d \n", from->data);
		from = from->nextNode;
	}
}

//노드 추가하는 함수
struct Node* InsertNode(struct Node* current, int data) {
	struct Node* after = current->nextNode;
	
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	
	//새로운 노드에 값을 넣어준다 
	newNode->data = data;
	newNode->nextNode = after;
	
	current->nextNode = newNode;
	
	return newNode;
}

//노드 삭제하는 함수
void DestroyNode(struct Node* destroy, struct Node* head) {
	struct Node* next = head;
	if (destroy == head) {
		free(destroy);
		
		return;
	}
	while (next) {
		if (next->nextNode = destroy->nextNode){
			
		}
		next = next->nextNode;
	}
	free(destroy);
}

//새로운 노드 생성 함수
struct Node* CreateNode(int data) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	
	newNode->data = data;
	newNode->nextNode = NULL;
	
	return newNode;
}
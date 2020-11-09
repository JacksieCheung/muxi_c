#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int Val;
    struct node* Prev;
    struct node* Next;
}listNode;

listNode* receive(listNode* ptr,int n){
    for (int i=0;i<n;i++){
        listNode* node=(listNode*)malloc(sizeof(listNode));
        scanf("%d", &node->Val);
        node->Next = ptr;
        node->Prev = NULL;
        if (ptr!=NULL) ptr->Prev = node;
        ptr = node;
    }
    return ptr;
}

int function(listNode* ptr,int n){
	int flag = 0;
	
	listNode* tail = ptr;
	listNode* head = ptr;
	while(tail->Next!=NULL) tail = tail->Next;

	printf("%d",tail->Val);

	for (;head!=tail&&head->Next!=tail;){
		if (head->Val!=tail->Val){
			flag = 1;
			break;
		}
		head=head->Next;
		tail=tail->Prev;
	}
	if (flag){
		return 0;
	}
	return 1;
}

int main(){
	int n = 0;
	scanf("%d",&n);

	listNode* ptr = NULL;
	ptr = receive(ptr,n);

	int adjust = function(ptr,n);
	if (adjust){
		printf("true");
	} else {
		printf("false");
	}

	return 0;
}

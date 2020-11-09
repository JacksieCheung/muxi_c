#include<stdio.h>
#include<stdlib.h>
#define size 10
#define ElemType int
#define Status int
#define OK 1
#define Error 0

typedef struct list{
	ElemType* data;
	int Length;
}SqList;

SqList* SqListInit(){
	SqList* L = (SqList*)malloc(sizeof(SqList));
	
	L->data = (ElemType*)malloc(sizeof(ElemType)*size);

	L->Length = size;
	
	for (int i=0;i<L->Length;i++) L->data[i]=i+5;

	return L;
}

void SqListOutput(SqList* L){
	for (int i=0;i<L->Length;i++) printf("%d ",L->data[i]);
	printf("\n");
}

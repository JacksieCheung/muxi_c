#include<stdio.h>
#include<stdlib.h>
#include "sqList.h"

// 删除顺序表最小的数，用函数返回。
// 为空则显示错误并退出运行。
Status deleteMin(SqList* L,ElemType* min){
	if (L->Length == 0){
		return Error;
	}
	
	int index = 0;
	*min = L->data[0];
	// find
	for (int i=0;i<L->Length;i++){
		if (*min>L->data[i]) {
			*min = L->data[i];
			index = i;
		}
	}

	// delete
	// L->data[index]=L->data[L->Length-1];
	// 移动实现
	for (int i = index;i<L->Length-1;i++){
		L->data[i]=L->data[i+1];
	}

	return OK;
}

int main(){
	SqList* L = SqListInit();
	
	int* min = (int*)malloc(sizeof(int));

	if (!deleteMin(L,min)){
		printf("arr is NULL");
		return 0;
	}

	printf("%d\n",*min);
	SqListOutput(L);

	return 0;
}

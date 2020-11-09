#include<stdio.h>

typedef struct{
    int   StuId;
    int   Score;
}student;

void getInfo(student* ptr,int n){
	for (int i=0;i<n;i++){
		scanf("%d %d",&ptr[i].StuId,&ptr[i].Score);
	}
}

void swap(student* num1,student* num2){
	int tmp = num1->StuId;
	num1->StuId = num2->StuId;
	num2->StuId = tmp;

	tmp = num1->Score;
	num1->Score = num2->Score;
	num2->Score = tmp;
}

void scoreSort(student* ptr,int n){
    for (int i=0;i<n;i++){
		for (int j=0;j<i;j++){
			if (ptr[i].Score<ptr[j].Score){
				swap(&ptr[i],&ptr[j]);
			}
		}
	}
}

void outputAsc(student* ptr,int n){
    scoreSort(ptr,n);
	for (int i=0;i<n;i++){
		printf("%d %d\n",ptr[i].StuId,ptr[i].Score);
	}
}

void outputDesc(student* ptr,int n){
	scoreSort(ptr,n);
	for (int i=n-1;i>=0;i--){
		printf("%d %d\n",ptr[i].StuId,ptr[i].Score);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	student stuInfo[n];

	getInfo(stuInfo,n);
	printf("\n");
	scoreSort(stuInfo,n);
	outputAsc(stuInfo,n);
	printf("\n");
	outputDesc(stuInfo,n);
}

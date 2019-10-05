#include<stdio.h>
#define NUM 5

void brost(int a[],int n){
	int i,j;
	for (i=0;i<n-1;i++){
		for (j=0;j<n-1-i;j++){
			int temp;
			if (a[j]>a[j+1]){
				temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

int main(){
	int i;
	int heigh[NUM];
	
	puts("请依次输入身高");
	for(i=0;i<NUM;i++){
		printf("%d号:",i+1);
		scanf("%d",&heigh[i]);
	}

	brost(heigh,NUM);
	puts("__________________________");
	for (i=0;i<NUM;i++)
	printf("%d号：%d\n",i+1,heigh[i]);
	return 0;
}

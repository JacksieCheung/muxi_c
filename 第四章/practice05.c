#include<stdio.h>
int main(){
	int a,b;
	a = 1;
	puts("请输入一个数");
	scanf("%d",&b);
	if (b >= a){
	while (a <= b){
		printf("%d ",a++);
	}
	printf("\n");
	}
	return 0;
}


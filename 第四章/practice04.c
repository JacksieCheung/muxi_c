#include<stdio.h>
int main(){
	int a;
	puts("请输入一个数");
	scanf("%d",&a);
	if (a>0){
	while (a >= 1){
		printf("%d ",a--);
	}
	printf("\n");
	}
	return 0;
}


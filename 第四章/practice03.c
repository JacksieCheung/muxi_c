#include<stdio.h>
int main(){
	int a;
	puts("请输入一个整数");
	scanf("%d",&a);
	if (a >= 0){
		while (a >=0){
			printf("%d ",a);
			a--;
		}
		printf("\n");
	}
	return 0;
}

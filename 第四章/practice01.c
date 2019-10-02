#include<stdio.h>
int b;
int main(){
	do {
	int a;
	puts("请输入一个数\n");
	scanf("%d",&a);
	if (a > 0)
		printf("正数\n");
	if (a < 0)
		printf("负数\n");
	if (a == 0)
		printf("0\n");
	printf("是否继续？Yes---1 No---0\n");
	scanf("%d",&b);
	}while (b == 1);
	return 0;
}

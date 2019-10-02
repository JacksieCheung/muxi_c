#include<stdio.h>
int main(){
	int a,b;
	puts("请输入一个数");
	scanf("%d",&a);
	for (b=1;b<=a;b++)
		printf("%d的二次方是%d\n",b,b*b);
	return 0;
}

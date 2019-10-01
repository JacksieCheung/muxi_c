#include<stdio.h>
int main(){
	int a,b,c;
	puts("请输入两个数：");
	printf("数一：");  scanf("%d",&a);
	printf("数二：");  scanf("%d",&b);
	c = a * b;
	printf("他们的乘积是：%d\n",c);
	return 0;
}

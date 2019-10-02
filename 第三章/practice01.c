#include<stdio.h>
int main(){
	puts("请输入两个数：");
	int a,b;
	scanf("%d%d",&a,&b);
	if (a%b)
	printf("%d不是%d的约数\n",b,a);
	else
	printf("%d是%d的约数\n",b,a);
	return 0;
}

#include<stdio.h>
int main(){
	int a,b;
	puts("请输入两个整数：");
	scanf("%d%d",&a,&b);
	printf("%d是%d的%.2lf\%%\n",a,b,(double)a/b*100);
	return 0;
}

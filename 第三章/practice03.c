#include<stdio.h>
int main(){
	int a;
	puts("请输入一个整数：");
	scanf("%d",&a);
	if (a >= 0)
		printf("%d\n",a);
	else
	        printf("%d\n",-a);
	return 0;
}

#include<stdio.h>
int main(){
	int a,b;
	puts("请输入两个整数");
	scanf("%d%d",&a,&b);
	if (a-b <=10 && b - a<= 10)
		printf("a和b的差值小于等于10\n");
	else 
		printf("a和b的差值大于10\n");
	return 0;
}

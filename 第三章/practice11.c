#include<stdio.h>
int main(){
	int a,b,c;
	puts("请输入三个数");
	scanf("%d%d%d",&a,&b,&c);
	if (a == b && b == c)
		printf("三者相等\n");
	else  if (a == b || b == c ||a == c)
		printf("有两数相等\n");
	else 
		printf("三者都不相等\n");
	return 0;
}

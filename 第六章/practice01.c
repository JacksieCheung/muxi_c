#include<stdio.h>

int min(int a,int b){
	if (a>b)
		return b;
	else
		return a;
}

int a,b;
int main(){
	puts("请输入两个整数");
	scanf("%d%d",&b,&a);
	printf("较小的数是%d\n",min(a,b));
return 0;
}

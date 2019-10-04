#include<stdio.h>

int sump(int n){
	int temp = n;
	while (n-->0)
		temp+=n;
	return temp;
}

int main(){
	int n;
	puts("请输入一个整数");
	scanf("%d",&n);
	printf("1到%d的整数之和为%d\n",n,sump(n));
	return 0;
}

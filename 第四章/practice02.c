#include<stdio.h>
int main(){
	int a,b,sum;
	sum = 0;
	puts("请输入两个数");
	scanf("%d%d",&a,&b);
	do {
	if (a < b){
	sum =sum + a;
	a = a + 1;
	}
       if (a > b){
	sum =sum + b;
	b = b + 1;
	}
	}while (!(a == b));
	printf("这两个数之间的所有整数之和是%d\n",sum+a);
	return 0;
}

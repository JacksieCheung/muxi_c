#include<stdio.h>

int cube(int x){
	return x*x*x;
}

int main(){
	int a;
	puts("请输入一个整数");
	scanf("%d",&a);
	printf("它的立方是%d\n",cube(a));
	
	return 0;
}

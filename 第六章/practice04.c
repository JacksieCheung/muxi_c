#include<stdio.h>

int pow2(int x){
	return x*x;
}

int pow4(int x){
	return pow2(pow2(x));
}

int main(){
	int x;
	puts("请输入一个整数");
	scanf("%d",&x);
	printf("它的四次方是%d\n",pow4(x));
	return 0;
}

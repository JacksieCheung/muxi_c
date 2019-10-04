#include<stdio.h>

void ring(int n){
	while(n-->0)
		printf("\a");
}

int main(){
	int n;
	puts("请输入次数");
	scanf("%d",&n);
	ring(n);
	return 0;
}

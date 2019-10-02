#include<stdio.h>
int main(){
	int a,b;
	a = 1;
	puts("请输入一个数");
	scanf("%d",&b);
	if(b >= 1){
		while(a <= b){
		printf("*\n");
		a++;
		}
	}
	return 0;
}

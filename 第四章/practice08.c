#include<stdio.h>
int main(){
	int a,b;
	a = 1;
	puts("请输入一个数");
	scanf("%d",&b);
	if (b > 0){
		while (a <= b){
		if (a%2)
		printf("+");
		else
		printf("-");
		a++;
		}
		printf("\n");
	}
	return 0;
}

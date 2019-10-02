#include<stdio.h>
int main(){
	int a,b;
	a = 2;
	puts("请输入一个数");
	scanf("%d",&b);
	if (b>=2){
		while (a<=b){
			printf("%d ",a);
			a = a+2;
		}
		printf("\n");
				}
				return 0;
				}


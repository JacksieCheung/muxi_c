#include<stdio.h>
int main(){
	int a,b,len;
	puts("输入一个数");
	scanf("%d",&len);
	for(a=1;a<=len;a++){
		for(b=len;b>=a;b--)
			printf("*");
		printf("\n");
	}
	return 0;
}

#include<stdio.h>
int main(){
	int a,b,c;
	puts("请输入一个整数");
	scanf("%d",&a);
	for (b=1;b<=a;b++){
		printf("*");
		c = b%10;
		if (c==5||c==0)
			printf("\n");
	}
	printf("\n");
	return 0;
}
	    

#include<stdio.h>
int main(){
	int a,b;
	puts("请输入一个数");
	scanf("%d",&a);
	for (b=1;b<=a;b++)
		if(b%2)
			printf("%d ",b);
	printf("\n");
	return 0;

}

#include<stdio.h>
int main(){
	int a,b,c;
	puts("请输入一个数");
	scanf("%d",&a);
	for (b=1;b<=a;b++){
		for (c=1;c<=b-1;c++)
			printf(" ");
		for (c=(a-1)*2+1;c>=(b-1)*2+1;c--)
			printf("%d",b%10);
		printf("\n");
	}
	return 0;
}

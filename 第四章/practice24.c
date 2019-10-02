#include<stdio.h>
int main(){
	int a,b,c;
	puts("请输入行数");
	scanf("%d",&a);
	for(b=1;b<=a;b++){
		for(c=a-1;c>=b;c--)
			printf(" ");
		for(c=1;c<=(b-1)*2+1;c++)
			printf("*");
		printf("\n");
	}
	return 0;
}

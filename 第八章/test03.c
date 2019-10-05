#include<stdio.h>
#define swap(type,x,y) (x=x^y,y=y^x,x=x^y)

int main(){
	int a,b;
	puts("请输入两个数");
	scanf("%d%d",&a,&b);
	swap(int,a,b);
	printf("%d %d",a,b);
	return 0;
}

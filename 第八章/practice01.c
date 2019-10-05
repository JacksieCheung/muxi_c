#include<stdio.h>
#define diff(x,y) (x>y)?(x-y):(y-x)

int main(){
	int x,y;
	puts("请为x，y赋值");
	scanf("%d%d",&x,&y);
	printf("%d",diff(x,y));
	return 0;
}

#include<stdio.h>
#define swap(type,x,y) ((a)=(a)+(b),(b)=(a)-(b),(a)=(a)-(b))

int main(){
	int a,b;
	puts("请输入两个数");
	scanf("%d%d",&a,&b);
	swap(int,a,b);
	printf("%d %d",a,b);
	return 0;
}

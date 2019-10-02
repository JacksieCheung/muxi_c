#include<stdio.h>
int main(){
	int a,b,c,min;
	puts("请输入三个数");
	scanf("%d%d%d",&a,&b,&c);
	min = a;
	if (b < min)
		b = min;
	if (c < min)
		c = min;
	printf("%d\n",min);
	return 0;
}

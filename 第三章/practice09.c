#include<stdio.h>
int main(){
	int a,b,c,min;
	puts("请输入三个数");
	scanf("%d%d%d",&a,&b,&c);
	min = (a < b)?a:b;
	min = (min < c)?min:c;
	printf("%d\n",min);
	return 0;
}

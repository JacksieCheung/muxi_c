#include<stdio.h>
int main(){
	int a,b,c;
 	puts("请输入开始数值，结束数值和间隔数值。");
	scanf("%d%d%d",&a,&b,&c);
	for(;a<=b;a=a+c)
	printf("%d  %.2f\n",a,(a-80)*0.7);
	return 0;
}

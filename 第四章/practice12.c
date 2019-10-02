#include<stdio.h>
int main(){
	int a,i,sum;
	sum = 0;
	puts("请输入一个数");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
        sum = sum +i;
	printf("%d\n",sum);
	return 0;
}

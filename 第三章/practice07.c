#include<stdio.h>
int main(){
	int a,b,c,d,max;
	puts("请输入四个数");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	max = a;
	 if (b > max) max = b;
	 if (c > max) max = c;
	 if (d > max) max = d;
	printf("%d\n",max);
	return 0;
}	

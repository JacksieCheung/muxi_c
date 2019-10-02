#include<stdio.h>
int main(){
	int a,b,c;
	puts("请输入两个数");
	scanf("%d%d",&a,&b);
	if (a >= b) 
	c = a - b;
        else 
	c = b - a;
	printf("%d\n",c);
return 0;	
}	

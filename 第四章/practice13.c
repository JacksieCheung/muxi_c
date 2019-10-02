#include<stdio.h>
int main(){
	int a,i,b;
	puts("请输入一个数");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
	b = i%10;
	printf("%d",b);
	}
printf("\n");
return 0;
}

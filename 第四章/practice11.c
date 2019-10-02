#include<stdio.h>
int main(){
	int a,i;
	i = 0;
	do{
	puts("请输入一个正整数");
	scanf("%d",&a);
	if (a <= 0)
		puts("请重新输入一个正整数");
	}while(a <= 0);
        
	printf("%d的位数是",a);
	while (a > 0){
		a/=10;
		i++;
	}
	printf("%d\n",i);
	return 0;
}

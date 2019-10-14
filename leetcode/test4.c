#include<stdio.h>

int reverse(int x){
	int a=0;
	while(x){
		a=a*10+x%10;
		x/=10;
	}
	return a;
}

int main(){
	int a;
	puts("请输入一个数");
	scanf("%d",&a);
	a=reverse(a);
	printf("%d",a);
	return 0;
}

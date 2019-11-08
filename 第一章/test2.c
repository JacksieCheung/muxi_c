#include<stdio.h>

int func(int n){
	if(n>0)
	return ("%d",n+func(n-1));
}

int main(){
	int n,k;
	puts("请输入数列的第几位");
	scanf("%d",&n);
	k=func(n);
	printf("%d",k);
	return 0;
}
